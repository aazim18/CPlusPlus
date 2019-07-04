/*
 * robots.cpp
 *
 *  Created on: Mar 23, 2015
 *      Author: azim1866
 */
#include <iostream>
#include <string>
#include "Robot.h"
#include "MasterRobot.h"
#include <fstream>
using namespace std;

MasterRobot:: MasterRobot(Robot *node)
{


Robot::setpointer(node);

}

Robot::Robot()
{
this->inprogress=0;
this->queued=0;

}

int Robot :: Queued()
{

return queued;

}

int Robot :: InProgress()
{

return inprogress;

}

int Robot :: FinishWork()
{

inprogress--;

}

void Robot::setpointer(Robot *node)
{

pointer=node;

}

int Robot :: IncreaseQ()
{

queued++;

}

int Robot :: DoWork()
{

        if( inprogress == 0)
        {
        
        inprogress++;
        
        }

        else if ( pointer-> InProgress()== 0 )
        {
                pointer->DoWork();
		inprogress++;
                
    }
        else
                {
pointer->IncreaseQ();
queued++;            
		}

}

