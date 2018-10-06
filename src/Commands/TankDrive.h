/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <Commands/Command.h>
#include <Subsystems/DriveTrain.h>

#include "../robot.h"

class TankDrive : public frc::Command {
private:
	DriveTrain* dt;
	double sleft;
	double sright;
public:
	TankDrive();
	void Initialize() override;
	void Execute();
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;
};

