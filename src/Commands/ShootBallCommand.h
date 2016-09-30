#ifndef SHOOTBALL_COMMAND_H
#define SHOOTBALL_COMMAND_H

#include "../CommandBase.h"
#include "WPILib.h"
#include "../Subsystems/ShooterSubsystem.h"

class ShootBallCommand: public CommandBase
{
public:
	ShootBallCommand();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
