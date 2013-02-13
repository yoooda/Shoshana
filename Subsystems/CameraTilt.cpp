#include "CameraTilt.h"
#include "../Robotmap.h"

CameraTilt::CameraTilt() : Subsystem("CameraTilt") {
	servoVertical = new Servo(CAMERA_SERVO_VERTICAL_PORT);
}
    
void CameraTilt::InitDefaultCommand() {
}

void CameraTilt::SetVerticalAngle(double angle)
{
	servoVertical->SetAngle(angle);
}
double CameraTilt::GetVerticalAngle()
{
	return servoVertical->GetAngle();
}
