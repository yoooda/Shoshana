#ifndef SETSTACKSTATE_H
#define SETSTACKSTATE_H

#include "../CommandBase.h"

/**
 *
 *
 * @author user
 */
class SetStackState: public CommandBase {
private:
	bool pistonIn, motorMoving;
public:
	SetStackState(bool pistonIn, bool motorMoving);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
