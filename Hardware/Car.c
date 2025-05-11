#include "stm32f10x.h"                  // Device header
#include "Motor.h"
#include "Delay.h"
uint8_t speed=50;
uint8_t Magnification=2;
void Car_Init(){
	Motor_Init();
}
void Go_Ahead(){
	Motor_SetLeftSpeed(speed);
	Motor_SetRightSpeed(-speed);
}
void Go_Back(){
	Motor_SetLeftSpeed(-speed);
	Motor_SetRightSpeed(speed);
}
void Turn_Left(){
	Motor_SetLeftSpeed(0);
	Motor_SetRightSpeed(-speed*Magnification);
}
void Turn_Right(){
	Motor_SetRightSpeed(0);
	Motor_SetLeftSpeed(speed*Magnification);
	
}
void Self_Left(){
	Motor_SetLeftSpeed(-speed*Magnification);
	Motor_SetRightSpeed(-speed*Magnification);
}
void Self_Right(){
	Motor_SetLeftSpeed(speed*Magnification);
	Motor_SetRightSpeed(speed*Magnification);
}
void Car_Stop(){
	Motor_SetLeftSpeed(0);
	Motor_SetRightSpeed(0);
}
