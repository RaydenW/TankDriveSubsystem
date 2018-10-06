/*
 * NetworkTablesInterface.cpp
 *
 *  Created on: Oct 6, 2018
 *      Author: Rayden
 */

#include <Utilities/NetworkTablesInterface.h>

int NetworkTablesInterface::getInt(){
	return nt::NetworkTableInstance::GetDefault().GetEntry("Entry Key").GetDouble(-1);
}

bool NetworkTablesInterface::getBool(){
	return nt::NetworkTableInstance::GetDefault().GetEntry("Entry Key").GetDouble(-1);
}
