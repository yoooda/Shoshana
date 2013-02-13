#ifndef COMMAND_BASE_H
#define COMMAND_BASE_H

#include "Commands/Command.h"
#include "Subsystems/PIDShooter.h"
#include "OI.h"
#include "Subsystems/Chassis.h"
#include "Subsystems/Stack.h"
#include "Subsystems/CameraTilt.h"
#include "Subsystems/ShooterLift.h"

/**
 * The base for all commands. All atomic commands should subclass CommandBase.
 * CommandBase stores creates and stores each control system. To access a
 * subsystem elsewhere in your code in your code use CommandBase.examplesubsystem
 */
class CommandBase: public Command {
public:
	CommandBase(const char *name);
	static void init();
	// Create a single static instance of all of your subsystems
	static NetworkTable *visionTable;
	
	static PIDShooter *shooter;
	static OI *oi;
	static Chassis* chassis;
	static Stack* stack;
	static CameraTilt* cameraTilt;
	static ShooterLift* shooterLift;
	
	static Relay* cameraLED;
	static Compressor* compressor;
	static void Status();
};

#endif
