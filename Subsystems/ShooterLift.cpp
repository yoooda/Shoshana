#include "ShooterLift.h"
#include "../Robotmap.h"

ShooterLift::ShooterLift() : Subsystem("ShooterLift") {
	soul = new DoubleSolenoid(SHOOTERLIFT_SOLENOID_F,
			SHOOTERLIFT_SOLENOID_R);
}
    
void ShooterLift::InitDefaultCommand() {
	//SetDefaultCommand(new MySpecialCommand());
}


void ShooterLift::SetSoulState(bool up)
{
	if (up)
	{
		soul->Set(DoubleSolenoid::kForward);
	}
	else
	{
		soul->Set(DoubleSolenoid::kReverse);
	}
}
