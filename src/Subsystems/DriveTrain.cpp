/*
 * DriveTrain.cpp
 *
 *  Created on: Sep 23, 2016
 *      Author: Nir
 */

#include <Subsystems/DriveTrain.h>

#define max(x, y) (((x) > (y)) ? (x) : (y))
DriveTrain::DriveTrain() :
	Subsystem("DriveTrain"), leftMotor(new Jaguar(MOTORLEFT)),
	rightMotor(new Jaguar(MOTORRIGHT)), mult(1.0)
{
}

DriveTrain::~DriveTrain()
{
	// TODO Auto-generated destructor stub
}

void DriveTrain::setMult(float m)
{
    mult = m;
}

int DriveTrain::getMult()
{
	return mult;
}

void DriveTrain::arcadeDrive(float moveValue, float rotateValue)
{
    float leftMotorOutput;
    float rightMotorOutput;

    moveValue = DriveTrain::Limit(moveValue, 1.0) * mult;
    rotateValue = -DriveTrain::Limit(rotateValue, 1.0);

    // Standard ArcadeDrive algorithm from Google
    if(moveValue > 0.0)
    {
        if(rotateValue > 0.0)
        {
            leftMotorOutput = moveValue - rotateValue;
            rightMotorOutput = max(moveValue, rotateValue);
        }
        else
        {
            leftMotorOutput = max(moveValue, -rotateValue);
            rightMotorOutput = moveValue + rotateValue;
        }
    }
    else
    {
        if(rotateValue > 0.0)
        {
            leftMotorOutput = - max(-moveValue, rotateValue);
            rightMotorOutput = moveValue + rotateValue;
        }
        else
        {
            leftMotorOutput = moveValue - rotateValue;
            rightMotorOutput = - max(-moveValue, -rotateValue);
        }
    }

    float limitedL = Drive::Limit(leftMotorOutput, 1.0);
    float limitedR = -Drive::Limit(rightMotorOutput, 1.0);

    left->Set(-limitedL);
    right->Set(-limitedR);
}

float DriveTrain::Limit(float num, float max)
{
    if(num > max)
        return max;

    if(num < -max)
        return -max;

    return num;
}
