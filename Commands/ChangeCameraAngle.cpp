#include "ChangeCameraAngle.h"

ChangeCameraAngle::ChangeCameraAngle(float dAngle) :
	CommandBase("ChangeCameraAngle") {
	Requires(cameraTilt);
	this->dAngle = dAngle;
}

// Called just before this Command runs the first time
void ChangeCameraAngle::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void ChangeCameraAngle::Execute() {
	cameraTilt->SetVerticalAngle(cameraTilt->GetVerticalAngle() + dAngle);
}

// Make this return true when this Command no longer needs to run execute()
bool ChangeCameraAngle::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void ChangeCameraAngle::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ChangeCameraAngle::Interrupted() {
}
