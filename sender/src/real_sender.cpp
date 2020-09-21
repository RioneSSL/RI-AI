#include <cmath>
#include <serial/serial.h>
#include "rclcpp/rclcpp.hpp"
#include "message_info/msg/robot_commands.hpp"

class RealSender : public rclcpp::Node{
public:
    SimSender()
    : Node("Masuo"){
        auto DEVICE = '/dev/ttyUSB0';
        auto BAUDRATE = 57600;
        
        serial = serial.Serial(self._DEVICE, self._BAUDRATE)
        
        sub_command = this->create_subscriber<message_info::msg::RobotCommands>(
            "robot_commands", 10, std::bind(&SimSender::send_commands, this, std;;placeholders::_1));


    }
private:
    void send(message_info::msg::RobotCommands msg){
        // 実機ロボットに動作司令を送信する
        // Roots Protocol
        // 0: 1111 1111 |HEADER_1 0xFF
        // 1: 1100 0011 |HEADER_2 0xC3
        // 2: 0000 xxxx |x:ID
        // 3: aaaa aaaa |a:vel_norm
        // 4: bbbb bbbb |b:vel_theta
        // 5: cccc cccc |c:omega(0~254), 127->0, 254->2PI [rad/sec]
        // 6: d01e f110 |d:dribble_flag, e:kick_flag, f:chip_enable
        // 7: gggg hhhh |g:dribble_power, h:kick_power
        // 8: **** **** |XOR([2] ~ [7])
        // 9: **** **** |XOR([8],0xFF)

        for(auto command : msg.commands){
            auto packet = bytearray();

            // ヘッダー
            packet.push_back(0xFF);
            packet.push_back(0xC3);
        
            // ロボットID
            packet.push_back(command.robot_id);
        
            // 走行速度ノルム
            // 0 ~ max_vel -> 0 ~ 254
            float vel_norm = math.sqrt(
                    math.pow(command.vel_surge, 2) + 
                    math.pow(command.vel_sway,2));

            float MAX_VEL_NORM = 4.0;

            if(vel_norm > self._MAX_VEL_NORM){
                vel_norm = self._MAX_VEL_NORM;
            }else if(vel_norm < 0){
                vel_norm = 0;
            }
            // 0 ~ max_vel -> 0 ~ 254
            puch_back(int(254 * (vel_norm/self._MAX_VEL_NORM)));
            //puch_back(int(254 * (vel_norm)));

            //# 走行速度方向
            // -pi ~ pi -> 0 ~ 179
            float vel_theta = math.atan2(command.vel_surge, -command.vel_sway);

            // -pi ~ pi -> 0 ~ 2pi
            if(vel_theta < 0){
                vel_theta += 2.0 * math.pi;
            }
            vel_theta = vel_theta*180/M_PI;
            vel_theta += 0 // -0.0を除去する
            // 0 ~ 2pi -> 0 ~ 179
            packet.push_back(int(vel_theta/2.0));


            //走行角速度
            // -2pi ~ pi -> 0 ~ 127 ~ 254
            // -2pi -> 0
            // 0 -> 127
            // 2pi -> 254
            float vel_angular = command.vel_angular;
            float MAX_VEL_ANGULAR = 2.0*M_PI;
            if(math.fabs(vel_angular) > self._MAX_VEL_ANGULAR){
                vel_angular = math.copysign(self._MAX_VEL_ANGULAR, vel_angular);
            }

            // -2pi ~ pi -> 0 ~ 127 ~ 254
            
            packet.push_back(int(127*(vel_angular/MAX_VEL_ANGULAR) + 127));
            //packet.append(int(127*(vel_angular/self._MAX_VEL_ANGULAR) + 127))

            // キックとドリブル
            // 6: d01e f110 |d:dribble_flag, e:kick_flag, f:chip_enable
            // 7: gggg hhhh |g:dribble_power, h:kick_power
            int command_packet = 0;
            int power_packet = 0;

            // ドリブル
            // 0 ~ 1.0 -> 0 ~ 15
            float dribble_power;

            if(command.dribble_power > 0){
                command_packet += 0x80;
                dribble_power = command.dribble_power;
                if(dribble_power > 1.0){
                    dribble_power = 1.0;
                }else if(dribble_power < 0){
                    dribble_power = 0;
                }
                dribble_power = int(15 * dribble_power);

                power_packet += dribble_power << 4;

            // キック
            // 0 ~ 1.0 -> 0 ~ 15
            if(command.kick_power > 0){
                command_packet += 0x10;
                kick_power = command.kick_power;
                if(kick_power > 1.0){
                    kick_power = 1.0;
                }else if(kick_power < 0){
                    kick_power = 0;
                }
                kick_power = int(15 * kick_power);

                power_packet += kick_power;

            command_packet += 0x26;

            packet.push_back(command_packet);
            packet.push_back(power_packet);

            // チェックサム
            // 8: **** **** |XOR([2] ~ [7])
            // 9: **** **** |XOR([8],0xFF)
            //int check_sum = 0

            //for p in packet[2:]:
                //check_sum ^= p

            //packet.append(check_sum)
            //packet.append(check_sum ^ 0xFF)

            serial.write(packet);
        }
    }
        

    void close_serial(){
        // 通信ポートを閉じる
        serial.close();
    }
}

int main(int argc, char * argv[]){
    rclcpp::init(argc, argv);

    rclcpp::spin(std::make_shared<RealSender>);
    rclcpp::shutdown();

    return 0;
}
