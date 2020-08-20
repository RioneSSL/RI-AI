#include <cmath>
#include <iostream>

#include "calculate.hpp"

float Calc::degree_improve(float degree){
	if(degree>180){
		degree=degree-360;
	}else if(degree<-180){
		degree=degree+360;
	}
	return degree;
}

float Calc::degree(geometry_msgs::msg::Pose2D object1, geometry_msgs::msg::Pose2D object2){
	float degree=std::atan2(object1.y - object2.y, object1.x - object2.x);
	return degree;
}

float Calc::wrap(float degree){
	degree = degree * 180 / M_PI;
	float a_constant=-0.002102256;
	float b_constant=1.647918685;
	float c_constant=-1.932145886;
	bool flag=false;
	float wrap_degree=0;

	if (degree<0){
		flag=true;
		degree=std::fabs(degree);
	}
	wrap_degree= degree * degree * a_constant + degree * b_constant + c_constant;

	if(flag==true){
		wrap_degree=(wrap_degree-360)*(-1);
	}
	if(wrap_degree>180){
		wrap_degree=wrap_degree-360;
	}

	wrap_degree = wrap_degree/180*M_PI;
	return wrap_degree;
}

float Calc::distance(geometry_msgs::msg::Pose2D object1, geometry_msgs::msg::Pose2D object2){
	float difference_x,difference_y,distance;

	difference_x=object1.x-object2.x;
	difference_y=object1.y-object2.y;
	
	distance=std::sqrt((difference_x*difference_x)+(difference_y*difference_y));

	return distance;
}

bool Calc::list_search(std::array<int,10> temp,int num){
	bool decision = false;
	for(int i=0; i<10; i++){
		if(temp[i]==num){
			decision = true;
		}
	}
	return decision;
}

void Calc::offense_position(std::array<int,10> offense, int field_width, std::vector<float> & target_position){
	//target_position = [10];
	offense_count = 0;

	for(int i=0; i<4; i++){
		if(offense[i] != -1){
			offense_count = offense_count + 1;
		}
	}
	//std::cout<<offense_count<<std::endl;
	separate = 4;
	if(offense_count ==4){
		separate =6;
	}
	val = field_width/separate;
	
	if(offense_count == 1){
		target_position.push_back(0);
	}else if(offense_count ==2){
		target_position.push_back(val);
		target_position.push_back(-val);
	}else if(offense_count == 3){
		target_position.push_back(0);
		target_position.push_back(val);
		target_position.push_back(-val);
	}else if(offense_count == 4){
		target_position.push_back(val);
		target_position.push_back(-val);
		target_position.push_back(val * 2);
		target_position.push_back(val * (-2));
	}

}

void Calc::defense_position(std::array<int,10> defense, int field_width, std::vector<float> & target_position){
	//target_position = [10];
	defense_count = 0;

	for(int i=0; i<4; i++){
		if(defense[i] != -1){
			defense_count = defense_count + 1;
		}
	}

	if(defense_count == 1){
		target_position.push_back(0);
	}else if(defense_count == 2){
		target_position.push_back(0.2);
		target_position.push_back(-0.2);
	}

}

