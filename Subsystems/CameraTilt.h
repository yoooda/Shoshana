#ifndef CAMERATILT_H
#define CAMERATILT_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author user
 */
class CameraTilt: public Subsystem {
private:
	Servo* servoVertical;
public:
	CameraTilt();
	void InitDefaultCommand();
	
	void SetVerticalAngle(double angle);
	double GetVerticalAngle();
	
};

#endif
