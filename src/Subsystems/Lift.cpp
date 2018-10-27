/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "../Commands/LiftMovement.h"
#include "Lift.h"
#include "../RobotMap.h"

#include "ctre/Phoenix.h"

Lift::Lift()
: Subsystem("ExampleSubsystem"), liftMotor(new TalonSRX(LIFT_MOTOR_PORT)) {
	liftMotor->ConfigSelectedFeedbackSensor(FeedbackDevice::CTRE_MagEncoder_Absolute, 0, 10);
}

void Lift::liftMovement(double speed){
	liftMotor->Set(ControlMode::PercentOutput, speed);
}

double Lift::getPosition(){
	return liftMotor->GetSelectedSensorPosition();
}

TalonSRX* Lift::getLiftMotor(){
	return liftMotor;
}

void Lift::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new LiftMovement());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
