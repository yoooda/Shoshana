#include "Stack.h"
#include "../Robotmap.h"

Stack::Stack() : Subsystem("Stack") {
	soul = new DoubleSolenoid(STACK_DOUBLE_SOLENOID_PORT_F,
			STACK_DOUBLE_SOLENOID_PORT_R);
	motor = new Talon(STACK_TALON_PORT);
	microSwitch = new DigitalInput(STACK_MS_PORT);
	
	motor->SetSafetyEnabled(false);
}
    
void Stack::InitDefaultCommand() {
	//No Deafault Command!
}

void Stack::PullOutPiston()
{
	soul->Set(DoubleSolenoid::kForward);
}
void Stack::PullInPiston()
{
	soul->Set(DoubleSolenoid::kReverse);
}
void Stack::ActivateMotor()
{
	motor->Set(SPEED);
}
void Stack::StopMotor()
{
	motor->Set(0.0f);	
}
bool Stack::IsFrisbeeInStack()
{
	return microSwitch->Get();
}
