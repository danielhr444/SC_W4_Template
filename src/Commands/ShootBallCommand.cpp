#include "ShootBallCommand.h"

ShootCommand::ShootBallCommand()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
}

// Called just before this Command runs the first time
void ShootBallCommand::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void ShootBallCommand::Execute()
{
	ShooterSubsystem::ShootBallCommand();

}

// Make this return true when this Command no longer needs to run execute()
bool ShootBallCommand::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void ShootBallCommand::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ShootBallCommand::Interrupted()
{

}
