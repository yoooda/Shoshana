#include "JoystickTankDrive.h"

JoystickTankDrive::JoystickTankDrive() : CommandBase("JoystickTankDrive") {
	Requires(chassis);
}

// Called just before this Command runs the first time
void JoystickTankDrive::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void JoystickTankDrive::Execute() {
	//chassis->TankDrive(oi->GetJoystickLeft(), oi->GetJoystickRight());
}

// Make this return true when this Command no longer needs to run execute()
bool JoystickTankDrive::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void JoystickTankDrive::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void JoystickTankDrive::Interrupted() {
}
