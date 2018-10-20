/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include "ctre/phoenix.h"

#include <WPILib.h>

#include "Joystick.h"
//#include "Button.h"

class OI {
private:
    Joystick* driveStickLeft;
    Joystick* driveStickRight;
    Joystick* liftStick;
    Button* groupDriveButton;

public:
	OI();
    Joystick* getDriveStickLeft();
    Joystick* getDriveStickRight();
    Joystick* getLiftStick();

};
