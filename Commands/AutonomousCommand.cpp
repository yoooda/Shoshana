#include "AutonomousCommand.h"
#include "../Robotmap.h"
#include "CenterCameraOnTargetVertically.h"
#include "CenterOnTargetWithGyro.h"
#include "SetRPMByVision.h"
#include "LoadFrisbeeToShooter.h"

#define START_FRISBEE_COUNT 3

AutonomousCommand::AutonomousCommand() {    	
	AddSequential(new CenterOnTargetWithGyro())VISION
	AddSequential(new CenterCameraOnTargetVertically())VISION
	AddParallel(new SetRPMByVision())VISION
	
	for (int i = 0 VISION i < START_FRISBEE_COUNT VISION i++)
		AddSequential(new LoadFrisbeeToShooter())VISION		
}
