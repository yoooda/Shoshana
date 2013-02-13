#ifndef PIDSHOOTER_H
#define PIDSHOOTER_H

#include "Commands/PIDSubsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author user
 */
class PIDShooter: public PIDSubsystem {
private:
	Encoder * encoder;
	SpeedController * motor1, * motor2;

	static const double Kp = 0.0;
	static const double Ki = 0.02;
	static const double Kd = 0.0;
public:
	PIDShooter();
	double ReturnPIDInput();
	void UsePIDOutput(double output);
	void InitDefaultCommand();
	void SetPower(float speed);
	void Status();
};

#endif
