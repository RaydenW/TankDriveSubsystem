/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "LiftMovement.h"
#include "robot.h"

LiftMovement::LiftMovement() {
	// Use Requires() here to declare subsystem dependencies
	Requires(Robot::m_lift);
}

// Called just before this Command runs the first time
void LiftMovement::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void LiftMovement::Execute() {
	Robot::m_lift->liftMovement(Robot::m_oi->getLiftStick()->GetY());
}

// Make this return true when this Command no longer needs to run execute()
bool LiftMovement::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void LiftMovement::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void LiftMovement::Interrupted() {

}
