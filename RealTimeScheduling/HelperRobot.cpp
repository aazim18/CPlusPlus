/*
 * HelperRobot.cpp
 *
 *  Created on: Mar 23, 2015
 *      Author: azim1866
 */

#include <iostream>
#include <string>
#include "HelperRobot.h"
#include <fstream>
using namespace std;

HelperRobot::HelperRobot()
{
this->inprogress=2;
this->queued=2;

} 
int HelperRobot :: FinishWork()
{
queued--;
}

