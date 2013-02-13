#ifndef JOYSTICKTANKDRIVE_H
#define JOYSTICKTANKDRIVE_H

#include "../CommandBase.h"

/**
 *
 *
 * @author user
 */
class JoystickTankDrive: public CommandBase {
public:
	JoystickTankDrive();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
