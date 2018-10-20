/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "OI.h"

#include <WPILib.h>
#include <Commands/GroupedDriving.h>
#include <Commands/TankDrive.h>

OI::OI()
: driveStickRight(new Joystick(1)), driveStickLeft(new Joystick(2)), liftStick(new Joystick(3)), groupDriveButton(new JoystickButton(driveStickLeft, 2)){
	// Process operator interface input here.

	groupDriveButton->WhenPressed(new GroupedDriving());
	groupDriveButton->WhenReleased(new TankDrive());

}

Joystick* OI::getDriveStickLeft(){
	return driveStickLeft;
}

Joystick* OI::getDriveStickRight(){
	return driveStickRight;
}

Joystick* OI::getLiftStick(){
	return liftStick;
}
