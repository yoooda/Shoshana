#include "SetShooterLifterStateByVision.h"
#include "../Robotmap.h"

#define MIN_DISTANCE_TO_BE_CONSIDERED_CLOSE 6

SetShooterLifterStateByVision::SetShooterLifterStateByVision() :
	SetShooterLifterState(IS_GITLITZ_KAFOT, "SetShooterLifterStateByVision") {
}

// Called just before this Command runs the first time
void SetShooterLifterStateByVision::Initialize() {
	isHigh = visionTable->GetNumber("Distance")
			< MIN_DISTANCE_TO_BE_CONSIDERED_CLOSE;
}
