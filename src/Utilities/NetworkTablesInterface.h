/*
 * NetworkTablesInterface.h
 *
 *  Created on: Oct 6, 2018
 *      Author: Rayden
 */

#ifndef SRC_UTILITIES_NETWORKTABLESINTERFACE_H_
#define SRC_UTILITIES_NETWORKTABLESINTERFACE_H_

#include "NetworkTables/NetworkTableInstance.h"

class NetworkTablesInterface {
public:
	static int getInt();
	static bool getBool();
};

#endif /* SRC_UTILITIES_NETWORKTABLESINTERFACE_H_ */
