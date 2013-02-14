#include "AutonomousCommand.h"
#include "../Robotmap.h"
#include "CenterCameraOnTargetVertically.h"
#include "CenterOnTargetWithGyro.h"
#include "SetRPMByVision.h"
#include "LoadFrisbeeToShooter.h"

#define START_FRISBEE_COUNT 3

AutonomousCommand::AutonomousCommand() {    	
	AddSequential(new CenterOnTargetWithGyro());
	AddSequential(new CenterCameraOnTargetVertically());
	AddParallel(new SetRPMByVision());
	
	for (int i = 0 ;i < START_FRISBEE_COUNT ;i++)
		AddSequential(new LoadFrisbeeToShooter());
}
