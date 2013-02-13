#include "StopShooter.h"

StopShooter::StopShooter():CommandBase("StopShooter") {
	Requires(shooter);
}

// Called just before this Command runs the first time
void StopShooter::Initialize() {
	shooter->Disable();
}

// Called repeatedly when this Command is scheduled to run
void StopShooter::Execute() {
	shooter->SetPower(0.0f);
}

// Make this return true when this Command no longer needs to run execute()
bool StopShooter::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void StopShooter::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void StopShooter::Interrupted() {
}
