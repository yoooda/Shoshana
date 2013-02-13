#ifndef CHANGECAMERAANGLE_H
#define CHANGECAMERAANGLE_H

#include "../CommandBase.h"

/**
 *
 *
 * @author user
 */
class ChangeCameraAngle: public CommandBase {
private:
	float dAngle;
public:
	ChangeCameraAngle(float);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
