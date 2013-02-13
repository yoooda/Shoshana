#ifndef STOPSHOOTER_H
#define STOPSHOOTER_H

#include "../CommandBase.h"

/**
 *
 *
 * @author user
 */
class StopShooter: public CommandBase {
public:
	StopShooter();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
