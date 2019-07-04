/*
 * HelperRobot.h
 *
 *  Created on: Mar 23, 2015
 *      Author: azim1866
 */

#ifndef HELPERROBOT_H_
#define HELPERROBOT_H_

#include <iostream>
#include <string>
#include "Robot.h"
#include <fstream>
using namespace std;
class HelperRobot : public Robot
{
public:
	HelperRobot();
	int FinishWork();

};




#endif /* HELPERROBOT_H_ */
