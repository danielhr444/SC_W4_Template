#ifndef SHOOTER_SUBSYSTEM_H
#define SHOOTER_SUBSYSTEM_H

#include "Commands/Subsystem.h"
#include "WPILib.h"
#include "../RobotMap.h"
#include "Commands/ShootBallCommand.h"
#include "Commands/BrakeShooterCommand.h"
class ShooterSubsystem: public Subsystem
{
private:
	Talon* shooterMotor1;
	Talon* shooterMotor2;

public:
	ShooterSubsystem(int _port1, int _port2);
	virtual ~shooterSubsystem();
	void InitDefaultCommand();

	void ShootBallCommand::Initialize();
	void ShootBallCommand::Execute();
	void ShootBallCommand::IsFinished();
	void ShootBallCommand::End();
	void ShootBallCommand::Interrupted();


	void BrakeShooterCommand::Initialize();
	void BrakeShooterCommand::Execute();
	void BrakeShooterCommand::IsFinished();
	void BrakeShooterCommand::End();
	void BrakeShooterCommand::Interrupted();
#endif
