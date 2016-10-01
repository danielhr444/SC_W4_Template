#ifndef OI_H
#define OI_H

#include "WPILib.h"
#include "RobotMap.h"

class OI
{
private:
	Joystick* driveStick;
	Button* shootBallButton;
	Button* intakeBallButton;
public:
	OI();
	void getJoystick();

};


#endif
