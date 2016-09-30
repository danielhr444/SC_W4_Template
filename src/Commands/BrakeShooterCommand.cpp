#include "BrakeShooterCommand.h"

BrakeShooterCommand::BrakeShooterCommand()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
}

// Called just before this Command runs the first time
void BrakeShooterCommand::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void BrakeShooterCommand::Execute()
{
	ShooterSubsystem::BrakeShooterCommand();
}

// Make this return true when this Command no longer needs to run execute()
bool BrakeShooterCommand::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void BrakeShooterCommand::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void BrakeShooterCommand::Interrupted()
{

}
