#ifndef STACK_H
#define STACK_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author GreenBlitz - Tom Kalavary
 */
class Stack : public Subsystem {
private:
	static const float SPEED;
	
	DoubleSolenoid* soul;
	Talon* motor;
	DigitalInput* microSwitch;
public:
	
	Stack();
	void InitDefaultCommand();
	
	void PullOutPiston();
	void PullInPiston();
	void ActivateMotor();
	void StopMotor();
	bool IsFrisbeeInStack();
};

#endif
