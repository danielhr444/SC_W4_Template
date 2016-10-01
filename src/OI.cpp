#include "OI.h"
#include "RobotMap.h"

OI::OI()
{
	// void driveStick :: getJoystick();
	// Process operator interface input here.
	drivestick = new Joystick(JOYSTICK);

	shootBallButton = new Button(driveStick, JOYSTICK);
	shootBallButton -> WhenPressed(new ShootBall());
	shootBallButton -> WhenReleased(new StopAcquirer());

	intakeBallButton = new Button(driveStick, JOYSTICK);
	intakeBallBUtton -> WhenPressed(new intakeBall());
	intakeBallButton -> WhenReleased(new StopAcquirer());
}


