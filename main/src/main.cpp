#include <rclcpp/rclcpp.hpp>
#include "game.hpp"

int main(int argc, char * argv[]){
  rclcpp::init(argc, argv); //初期化
  auto node = std::make_shared<Game>(); //node
  RCLCPP_INFO(node->get_logger(),"Game Start"); //画面表示
  rclcpp::spin(node); //spin
  rclcpp::shutdown(); //shutdown
  return 0;
}

