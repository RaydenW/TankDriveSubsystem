/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "LeftDrive.h"
#include <robot.h>

LeftDrive::LeftDrive() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(Robot::m_drive);
}

// Called just before this Command runs the first time
void LeftDrive::Initialize() {
	SetTimeout(5);
}

// Called repeatedly when this Command is scheduled to run
void LeftDrive::Execute() {
	Robot::m_drive->leftDrive(0.2);
}

// Make this return true when this Command no longer needs to run execute()
bool LeftDrive::IsFinished() {
	return IsTimedOut();
}

// Called once after isFinished returns true
void LeftDrive::End() {
	Robot::m_drive->leftDrive(0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void LeftDrive::Interrupted() {
	End();
}
