#ifndef BRAKESHOOTER_COMMAND_H
#define BRAKESHOOTER_COMMAND_H

#include "../CommandBase.h"
#include "WPILib.h"
#include "../Subsystems/ShooterSubsystem.h"
class BrakeShooterCommand: public CommandBase
{
public:
	BrakeShooterCommand();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
