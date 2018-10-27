/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "LiftReset.h"
#include "LiftMovement.h"
#include "robot.h"
#include "WPILib.h"

LiftReset::LiftReset() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(Robot::m_lift);
}

// Called just before this Command runs the first time
void LiftReset::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void LiftReset::Execute() {
	Robot::m_lift->liftMovement(-0.1);
}

// Make this return true when this Command no longer needs to run execute()
bool LiftReset::IsFinished() {
	if(Robot::m_lift->getLiftMotor()->GetSensorCollection().IsFwdLimitSwitchClosed()){
		return true;
	}
	else
		return false;
	Robot::m_lift->getLiftMotor()->SetSelectedSensorPosition(0);
}

// Called once after isFinished returns true
void LiftReset::End() {
	Robot::m_lift->liftMovement(0);
	Robot::m_lift->SetCurrentCommand(new LiftMovement());
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void LiftReset::Interrupted() {
	End();
}
