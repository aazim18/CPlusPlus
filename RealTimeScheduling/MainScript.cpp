/*
 * MainScript.cpp
 *
 *  Created on: Mar 23, 2015
 *      Author: azim1866
 */

#include <iostream>
#include <string>
#include "HelperRobot.h"
#include "Robot.h"
#include "MasterRobot.h"
#include <stdlib.h>

using namespace std;

int main()
{


HelperRobot*  helper;
MasterRobot master  = new MasterRobot(helper);
HelperRobot NewHelper;

master.DoWork();
cout << master.InProgress();
cout << " jobs working  ";
cout << master.Queued();
cout << " jobs queued\n";


master.DoWork();
cout << master.InProgress();
cout << " jobs working  ";
cout << master.Queued();
cout << " jobs queued\n";

master.DoWork();
cout << master.InProgress();
cout << " jobs working  ";
cout << master.Queued();
cout << " jobs queued\n";

master.DoWork();
cout << master.InProgress();
cout << " jobs working  ";
cout << master.Queued();
cout << " jobs queued\n";

NewHelper.FinishWork();
cout << NewHelper.InProgress();
cout << " jobs working  ";
cout << NewHelper.Queued();
cout << " jobs queued\n";

NewHelper.FinishWork();
cout << NewHelper.InProgress();
cout << " jobs working  ";
cout << NewHelper.Queued();
cout << " jobs queued\n";

master.FinishWork();
cout << master.InProgress();
cout << " jobs working  ";
cout << NewHelper.Queued();
cout << " jobs queued\n";

master.FinishWork();
cout << master.InProgress();
cout << " jobs working  ";
cout << NewHelper.Queued();
cout << " jobs queued\n";

return 0;
}





