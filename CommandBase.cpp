#include "CommandBase.h"
#include "Commands/Scheduler.h"
#include "Robotmap.h"

CommandBase::CommandBase(const char *name) : Command(name) {
}

// Initialize a single static instance of all of your subsystems to NULL
NetworkTable* CommandBase::visionTable = NULL;

PIDShooter* CommandBase::shooter = NULL;
OI* CommandBase::oi = NULL;
Chassis * CommandBase::chassis = NULL;
Stack * CommandBase::stack = NULL;
CameraTilt * CommandBase::cameraTilt = NULL;
ShooterLift * CommandBase::shooterLift = NULL;
Compressor * CommandBase::compressor = NULL;
Relay * CommandBase::cameraLED = NULL;

void CommandBase::init() {
    // Create a single static instance of all of your subsystems. The following
	// line should be repeated for each subsystem in the project. 
	shooter = new PIDShooter();
	visionTable = NetworkTable::GetTable("vision");
	oi = new OI();
	chassis = new Chassis();
	stack = new Stack();
	cameraTilt = new CameraTilt();
	shooterLift = new ShooterLift();
	
	cameraLED = new Relay(CAMERA_LED_PORT, Relay::kForwardOnly);
	compressor = new Compressor(COMPRESSOR_PRESSURE_SWITCH, COMPRESSOR_RELAY);

	// Do we want it when the robot was just powered on???
	//cameraLED->Set(Relay::kForward);
	//compressor->Start();
}

void CommandBase::Status(){
	shooter->Status();
}

