#include "PIDShooter.h"
#include "../Robotmap.h"
#include "SmartDashboard/SmartDashboard.h"
#include "../Commands/StopShooter.h"

PIDShooter::PIDShooter() : PIDSubsystem("PIDShooter", Kp, Ki, Kd) {
	encoder = new Encoder(SHOOTER_ENCODER_PORT);
	motor1 = new Jaguar(SHOOTER_MOTOR1_PORT);
	motor2 = new Jaguar(SHOOTER_MOTOR2_PORT);
	encoder->SetDistancePerPulse(6.0 / 25.0);
}

double PIDShooter::ReturnPIDInput() {
	return encoder->GetRate();
}

void PIDShooter::UsePIDOutput(double output) {
	this->SetPower(output);
}

void PIDShooter::InitDefaultCommand() {
	SetDefaultCommand(new StopShooter());
}

void PIDShooter::SetPower(float speed)
{
	motor1->Set(speed);
	motor2->Set(speed);
}

void PIDShooter::Status()
{
	SmartDashboard::PutNumber("ShooterRPM", GetPosition());
}







