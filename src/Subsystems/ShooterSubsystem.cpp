#include "ShooterSubsystem.h"
#include "../RobotMap.h"

ShooterSubsystem::ShooterSubsystem() :
	Subsystem("ShooterSubsystem"), shooterMotor1(new Talon(SHOOTERMOTOR1)),
	shooterMotor2(new Talon(SHOOTERMOTOR2))
{
		// no code
};

void ShooterSubsystem::ShootBallCommand()
{
	ShooterMotor1.setSpeed(1.0);
	ShooterMotor2.setSpeed(1.0);

	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
};
void ShooterSubsystem::BrakeShooterCommand()
{
	ShooterMotor1.setSpeed(0);
	ShooterMotor2.setSpeed(0);
};



// Put methods for controlling this subsystem
// here. Call these from Commands.

