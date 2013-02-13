#include "Chassis.h"
#include "../Robotmap.h"
#include "../Commands/JoystickTankDrive.h"

Chassis::Chassis() : Subsystem("Chassis") {
	topLeft = new Talon(CHASSIS_TALON_TL_PORT);
	topRight = new Talon(CHASSIS_TALON_TR_PORT);
	botLeft = new Talon(CHASSIS_TALON_BL_PORT);
	botRight = new Talon(CHASSIS_TALON_BR_PORT);
	drive = new RobotDrive(topLeft, botLeft, topRight, botLeft);

	gyro = new Gyro(CHASSIS_GYRO_PORT);
	
	//gyro->SetSensitivity(304928);
	//TODO: set real sensitittiuviity
	
	ResetGyro();
}

void Chassis::InitDefaultCommand() {
	SetDefaultCommand(new JoystickTankDrive());
}

void Chassis::TankDrive(Joystick *left, Joystick *right)
{
	drive->TankDrive(left,right);
}

void Chassis::ArcadeDrive(float speed, float rotation)
{
	drive->ArcadeDrive(speed,rotation);
}

void Chassis::ArcadeDrive(Joystick *stick)
{
	this->ArcadeDrive(stick->GetY(),stick->GetX());
}

float Chassis::GetGyroAngle()
{
	return gyro->GetAngle();
}

void Chassis::ResetGyro()
{
	gyro->Reset();
}
