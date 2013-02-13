#ifndef CHASSIS_H
#define CHASSIS_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author BBundle Hamelech
 */
class Chassis: public Subsystem {
private:
	RobotDrive * drive;
	SpeedController * topLeft;
	SpeedController * botLeft;
	SpeedController * topRight;
	SpeedController * botRight;
	
	Gyro* gyro;
public:
	Chassis();
	void InitDefaultCommand();
	void TankDrive(Joystick * left,Joystick * right);
	void ArcadeDrive(Joystick * stick);
	void ArcadeDrive(float speed, float rotation);
	float GetGyroAngle();
	void ResetGyro();
};

#endif
