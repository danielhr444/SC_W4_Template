/*
 * ArcadeDrive.h
 *
 *  Created on: Sep 30, 2016
 *      Author: danie
 */

#ifndef SRC_COMMANDS_ARCADEDRIVE_H_
#define SRC_COMMANDS_ARCADEDRIVE_H_

class ArcadeDrive {
public:
	ArcadeDrive();
	virtual ~ArcadeDrive();
};
#include "../CommandBase.h"
#include "WPILib.h"

class ExampleCommand: public CommandBase
{
public:
	ExampleCommand();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};


#endif /* SRC_COMMANDS_ARCADEDRIVE_H_ */
