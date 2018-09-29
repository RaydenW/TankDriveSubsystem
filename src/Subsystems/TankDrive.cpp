/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "TankDrive.h"
#include "../RobotMap.h"

TankDrive::TankDrive()
: Subsystem("TankDrive"), left(new TalonSRX(LEFT_MOTOR_PORT)), right(new TalonSRX(RIGHT_MOTOR_PORT)) {

}

void TankDrive::InitDefaultCommand() {
	// Set the default command for a subsystem here.
}

void TankDrive::tankDrive(double leftSpeed, double rightSpeed){
	left->Set(ControlMode::PercentOutput, leftSpeed);
	right->Set(ControlMode::PercentOutput, rightSpeed);
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
