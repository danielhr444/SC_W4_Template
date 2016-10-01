/*
 * ArcadeDrive.cpp
 *
 *  Created on: Sep 30, 2016
 *      Author: danie
 */

#include <Commands/ArcadeDrive.h>

ArcadeDrive::ArcadeDrive() {
	// TODO Auto-generated constructor stub

}

ArcadeDrive::~ArcadeDrive() {
	// TODO Auto-generated destructor stub
}

#include "ExampleCommand.h"

ExampleCommand::ExampleCommand()
{
	Requires(driveTrain);

	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
}

// Called just before this Command runs the first time
void ExampleCommand::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void ExampleCommand::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool ExampleCommand::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void ExampleCommand::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ExampleCommand::Interrupted()
{

}
