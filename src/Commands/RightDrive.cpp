/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "RightDrive.h"
#include <robot.h>

RightDrive::RightDrive() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
}

// Called just before this Command runs the first time
void RightDrive::Initialize() {
	SetTimeout(5);
}

// Called repeatedly when this Command is scheduled to run
void RightDrive::Execute() {
	Robot::m_drive->rightDrive(-0.5);
}

// Make this return true when this Command no longer needs to run execute()
bool RightDrive::IsFinished() {
	return IsTimedOut();
}

// Called once after isFinished returns true
void RightDrive::End() {
	Robot::m_drive->leftDrive(0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void RightDrive::Interrupted() {
	End();
}
