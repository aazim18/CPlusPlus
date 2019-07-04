/*
 * HelperRobot.h
 *
 *  Created on: Mar 23, 2015
 *      Author: azim1866
 */

#ifndef ROBOT_H_
#define ROBOT_H_

#include <iostream>
#include <string>
using namespace std;

class Robot
{
public:
	Robot();
	int DoWork();
	int FinishWork();
	int Queued();
	int InProgress();
	void setpointer(Robot *node);
	int IncreaseQ();
protected:
	Robot *pointer;
	int inprogress;
	int  queued;


};

#endif /* ROBOT_H_ */
