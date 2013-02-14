#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI {
private:
	Joystick * stickLeft, * stickRight,*stickSub;
	JoystickButton ** buttonLeft,**buttonRight,**buttonSub;
	void buttonInit();
public:
	OI();
	Joystick* GetStickLeft();
	Joystick* GetStickRight();
	Joystick* GetStickSub();
};

#endif
