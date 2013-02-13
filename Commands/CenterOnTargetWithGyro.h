#ifndef CENTERONTARGETWITHGYRO_H
#define CENTERONTARGETWITHGYRO_H

#include "../CommandBase.h"

/**
 *
 *
 * @author user
 */
class CenterOnTargetWithGyro: public CommandBase {
private:
	static const double kP = 1.0 / 24.0;
	double dAngle;
public:
	CenterOnTargetWithGyro();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
