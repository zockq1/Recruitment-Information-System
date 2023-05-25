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
	string id = this->control->logoutSubmit(currentUser);
    
	*fout << "2.2. Logout" << endl ;
    *fout << "> " << id << endl ;
}

string LogOut::logoutSubmit(CurrentUser *currentUser)
{
    User* me = currentUser->getCurrentUser();
    currentUser->deleteCurrentUser();
    string ID = me->getId();
 	return ID;
}