#include "CenterCameraOnTargetVertically.h"

CenterCameraOnTargetVertically::CenterCameraOnTargetVertically():CommandBase("CenterCameraOnTarget") {
	Requires(cameraTilt);
}

// Called just before this Command runs the first time
void CenterCameraOnTargetVertically::Initialize() {
}

// Called repeatedly when this Command is scheduled to run
void CenterCameraOnTargetVertically::Execute() {
	cameraTilt->SetVerticalAngle(cameraTilt->GetVerticalAngle() + visionTable->GetNumber("dAngle"));
}

// Make this return true when this Command no longer needs to run execute()
bool CenterCameraOnTargetVertically::IsFinished() {
	return visionTable->GetBoolean("IsTargetCenteredVertically");
}

// Called once after isFinished returns true
void CenterCameraOnTargetVertically::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CenterCameraOnTargetVertically::Interrupted() {
}
