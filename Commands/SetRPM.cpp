#include "SetRPM.h"

SetRPM::SetRPM(float RPM) : CommandBase("SetRPM") {
	Requires(shooter);
	setPoint = RPM;
}

SetRPM::SetRPM(const char* name) : CommandBase(name) {
	Requires(shooter);
	setPoint = 0;
}

// Called just before this Command runs the first time
void SetRPM::Initialize() {
	shooter->SetSetpoint(setPoint);
	shooter->Enable();
}

// Called repeatedly when this Command is scheduled to run
void SetRPM::Execute() {
}

// Make this return true when this Command no longer needs to run execute()
bool SetRPM::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void SetRPM::End() {
	shooter->Disable();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SetRPM::Interrupted() {
	End();
}
