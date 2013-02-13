#include "SetRPMByVision.h"

SetRPMByVision::SetRPMByVision() : SetRPM("SetRPMByVision") {
	
}

// Called just before this Command runs the first time
void SetRPMByVision::Initialize() {
	setPoint = visionTable->GetNumber("RPM");
	shooter->SetSetpoint(setPoint);
	shooter->Enable();
}
