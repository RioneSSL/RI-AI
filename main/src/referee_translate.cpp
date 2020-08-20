#include "referee_translate.hpp"

using namespace std;

void Referee::translate(message_info::msg::Referee & referee, message_info::msg::DetectionBall ball){
	string referee_command = "";
	if(referee.command == 0){
		referee.info = "HALT";
	}else if(referee.command ==1){
		referee.info = "STOP";
	}else if(referee.command ==2){
		referee.info = "NORMAL_START";
	}else if(referee.command == 3){
		referee.info = "FORCE_START";
	}else if(referee.command == 4){
		referee.info = "OUR_KICKOFF_START";
	}else if(referee.command == 5){
		referee.info = "THEIR_KICKOFF_START";
	}else if(referee.command == 6){
		referee.info = "OUR_PENALTY_PRE";
	}else if(referee.command == 7){
		referee.info = "THEIR_PENALTY_PRE";
	}else if(referee.command == 8){
		referee.info = "OUR_DIRECT";
	}else if(referee.command == 9){
		referee.info = "THEIR_DIRECT";
	}else if(referee.command == 10){
		referee.info = "OUR_INDIRECT";
	}else if(referee.command == 11){
		referee.info = "THEIR_INDIRECT";
	}else if(referee.command == 12){
		referee.info = "KICKOFF_START";
	}

	referee.play = false;

	if(referee.info == "OUR_PENALTY_PRE" or referee.info == "OUR_DIRECT" \
		or referee.info == "OUR_INDIRECT" or referee.info == "THEIR_KICKOFF_START" or referee.info == "THEIR_PENALTY_PRE" \
		or referee.info == "THEIR_DIRECT" or referee.info == "THEIR_INDIRECT " ){

		count = count + 1;
		if(count == 1){
			set_position.x = ball.pose.x;
			set_position.y = ball.pose.y;
		}
		distance = Calc::distance(set_position, ball.pose);

		if(distance >= 0.1)referee.play = true;
	}else{
		count = 0;
	}

}
