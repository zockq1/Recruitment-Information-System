#include <iostream>
#include <string>
#include <fstream>
#include "LogOut.h"
#include "LogOutUI.h"
using namespace std;


LogOutUI::LogOutUI(LogOut *control)
{
	this->control = control;
}

void LogOutUI::logoutSubmit(CurrentUser *currentUser, ofstream *fout) 
{
	this->control->logoutSubmit(currentUser);
    User *me = currentUser->getCurrentUser();
    string ID = me->getId();
	*fout << "2.2. 로그아웃" << endl ;
    *fout << "> " << ID << endl ;
}

void LogOut::logoutSubmit(CurrentUser *currentUser)
{
    currentUser->deleteCurrentUser();
 	return;
}