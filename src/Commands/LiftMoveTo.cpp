/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "LiftMoveTo.h"
#include <Utilities/WVPIDController.h>
#include "LiftMovement.h"
#include "robot.h"
#include "WPILib.h"

LiftMoveTo::LiftMoveTo() : distancePID(new WVPIDController(0.1, 0.0, 0.0, 5, false)){
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(Robot::m_lift);
}

// Called just before this Command runs the first time
void LiftMoveTo::Initialize() {
}

// Called repeatedly when this Command is scheduled to run
void LiftMoveTo::Execute() {
	Robot::m_lift->liftMovement(distancePID->Tick(Robot::m_lift->getPosition()));
}

// Make this return true when this Command no longer needs to run execute()
bool LiftMoveTo::IsFinished() {
	if(Robot::m_lift->getLiftMotor()->GetSensorCollection().IsFwdLimitSwitchClosed() || distancePID->GetError() < 1 || distancePID->GetError() > -1){
		return true;
	}
	else
		return false;

}

// Called once after isFinished returns true
void LiftMoveTo::End() {
	Robot::m_lift->liftMovement(0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void LiftMoveTo::Interrupted() {

}
