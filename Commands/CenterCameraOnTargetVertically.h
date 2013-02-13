#ifndef CENTERCAMERAONTARGETVERTICALLY_H
#define CENTERCAMERAONTARGETVERTICALLY_H

#include "../CommandBase.h"

/**
 *
 *
 * @author user
 */
class CenterCameraOnTargetVertically: public CommandBase {
public:
	CenterCameraOnTargetVertically();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
