#include "CenterOnTargetWithGyro.h"
#include "../Robotmap.h"

CenterOnTargetWithGyro::CenterOnTargetWithGyro() :
	CommandBase("CenterOnTargetWithGyro") {
	Requires(chassis);
}

// Called just before this Command runs the first time
void CenterOnTargetWithGyro::Initialize() {
	chassis->ResetGyro();
	dAngle = visionTable->GetNumber("HorizontalDAngle");
}

// Called repeatedly when this Command is scheduled to run
void CenterOnTargetWithGyro::Execute() {
	float error = dAngle - chassis->GetGyroAngle();

	chassis->ArcadeDrive(0, error * kP);
}

// Make this return true when this Command no longer needs to run execute()
bool CenterOnTargetWithGyro::IsFinished() {
	//TODO: isFinished function based on counter if the error is negative..
	
	float error = dAngle - chassis->GetGyroAngle();

	return -5  < error
			&& error < 5 ;
}

// Called once after isFinished returns true
void CenterOnTargetWithGyro::End() {
	chassis->ArcadeDrive(0, 0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CenterOnTargetWithGyro::Interrupted() {
	End();
}
