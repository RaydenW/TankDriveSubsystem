/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include <Commands/TankDrive.h>
#include <Subsystems/DriveTrain.h>

#include "../robot.h"

TankDrive::TankDrive()
: dt(new DriveTrain()), sleft(0.0), sright(0.0){
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());

}

// Called just before this Command runs the first time
void TankDrive::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void TankDrive::Execute() {
	dt->tankDrive(Robot::m_oi.getDriveStickLeft()->GetMagnitude(), Robot::m_oi.getDriveStickRight()->GetMagnitude()*-1);
}

// Make this return true when this Command no longer needs to run execute()
bool TankDrive::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void TankDrive::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TankDrive::Interrupted() {

}
