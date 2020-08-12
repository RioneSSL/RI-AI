#include <rclcpp/rclcpp.hpp>
#include "game.hpp"

int main(int argc, char * argv[]){
  rclcpp::init(argc, argv); //初期化
  auto node = std::make_shared<Game>();
  RCLCPP_INFO(node->get_logger(),"Game Start");
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}

