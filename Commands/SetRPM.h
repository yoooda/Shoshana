#ifndef SETRPM_H
#define SETRPM_H

#include "../CommandBase.h"

/**
 *
 *
 * @SonarX
 */
class SetRPM: public CommandBase {
protected:
	float setPoint;
public:
	SetRPM(float RPM);
	SetRPM(const char* name);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
