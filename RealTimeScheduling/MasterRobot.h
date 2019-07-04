/*
 * MasterRobot.h
 *
 *  Created on: Mar 23, 2015
 *      Author: azim1866
 */

#ifndef MASTERROBOT_H_
#define MASTERROBOT_H_
#include <iostream>
#include <string>
#include "Robot.h"
#include <fstream>
using namespace std;


class MasterRobot : public Robot
{
public:
        MasterRobot(Robot *node);
        int Dowork();
        
private:
        Robot *pointer;



};




#endif /* MASTERROBOT_H_ */
