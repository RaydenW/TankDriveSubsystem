/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include <Subsystems/DriveTrain.h>
#include "../RobotMap.h"
#include "../Commands/TankDrive.h"

DriveTrain::DriveTrain()
: Subsystem("TankDrive"), left(new TalonSRX(LEFT_MOTOR_PORT)), right(new TalonSRX(RIGHT_MOTOR_PORT)) {

}

void DriveTrain::InitDefaultCommand() {
	SetDefaultCommand(new TankDrive());
}

void DriveTrain::tankDrive(double leftSpeed, double rightSpeed){
	left->Set(ControlMode::PercentOutput, leftSpeed);
	right->Set(ControlMode::PercentOutput, rightSpeed);
}

void DriveTrain::leftDrive(double speed){
	left->Set(ControlMode::PercentOutput, speed);
}

void DriveTrain::rightDrive(double speed){
	right->Set(ControlMode::PercentOutput, speed);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
