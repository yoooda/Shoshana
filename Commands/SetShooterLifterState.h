#ifndef SETSHOOTERLIFTERSTATE_H
#define SETSHOOTERLIFTERSTATE_H

#include "../CommandBase.h"

class SetShooterLifterState: public CommandBase {
protected:
	bool isHigh;
public:
	SetShooterLifterState(bool wantedState,
			const char* name = "SetShooterLifterState");
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
