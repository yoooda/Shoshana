#ifndef SETSHOOTERLIFTERSTATEBYVISION_H
#define SETSHOOTERLIFTERSTATEBYVISION_H

#include "../CommandBase.h"
#include "SetShooterLifterState.h"

/**
 *
 *
 * @author user
 */
class SetShooterLifterStateByVision: public SetShooterLifterState {
public:
	SetShooterLifterStateByVision();
	virtual void Initialize();
};

#endif
