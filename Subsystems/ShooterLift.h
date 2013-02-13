#ifndef SHOOTERLIFT_H
#define SHOOTERLIFT_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author user
 */
class ShooterLift: public Subsystem {
private:
	DoubleSolenoid* soul;
public:
	ShooterLift();
	void InitDefaultCommand();
	
	void SetSoulState(bool forward);
};

#endif
