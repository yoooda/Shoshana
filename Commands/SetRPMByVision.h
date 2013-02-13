#ifndef SETRPMBYVISION_H
#define SETRPMBYVISION_H

#include "../CommandBase.h"
#include "SetRPM.h"
/**
 *
 *
 * @author SonarX
 */
class SetRPMByVision: public SetRPM {
public:
	SetRPMByVision();
	virtual void Initialize();
};

#endif
