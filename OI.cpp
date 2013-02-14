#include "OI.h"

OI::OI() {
	stickLeft=new Joystick(1);
	stickRight=new Joystick(2);
	stickSub=new Joystick(3);
	buttonInit();
}

Joystick *OI::GetStickLeft()
{
	return stickLeft;
}



Joystick *OI::GetStickRight()
{
	return stickRight;
}



void OI::buttonInit()
{
	buttonLeft=new JoystickButton*[11];
	buttonRight=new JoystickButton*[11];
	buttonSub=new JoystickButton*[11];
	for (int i = 0; i < 11; ++i) {
		buttonLeft[i]=new JoystickButton(stickLeft,i+1);
		buttonRight[i]=new JoystickButton(stickRight,i+1);
		buttonSub[i]=new JoystickButton(stickSub,i+1);
	}
			
}

Joystick *OI::GetStickSub()
{
	return stickSub;
}


