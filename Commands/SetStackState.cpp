#include "SetStackState.h"

SetStackState::SetStackState(bool pistonIn, bool motorMoving)
	: CommandBase("SetShooterState") {
	Requires(stack);
	
	this->pistonIn = pistonIn;
	this->motorMoving = motorMoving;
}

// Called just before this Command runs the first time
void SetStackState::Initialize() {
	if (pistonIn)
		stack->PullInPiston();
	else
		stack->PullOutPiston();
	
	if (motorMoving)
		stack->ActivateMotor();
	else
		stack->StopMotor();
}

// Called repeatedly when this Command is scheduled to run
void SetStackState::Execute() {
	
}

// Make this return true when this Command no longer needs to run execute()
bool SetStackState::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void SetStackState::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SetStackState::Interrupted() {
}
