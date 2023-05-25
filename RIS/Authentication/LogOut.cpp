#include <iostream>
#include <string>
#include <fstream>
#include "LogOut.h"
#include "LogOutUI.h"
#include "../Entity/CurrentUser.h"
#include "../Entity/UserCollection.h"

extern CurrentUser* currentUser;
extern UserCollection* userCollection;

using namespace std;

LogOutUI::LogOutUI(LogOut *control)
{
	this->control = control;
}

void LogOutUI::logoutSubmit(ofstream *fout) 
{
	this->control->logoutSubmit();
    User *me = currentUser->getCurrentUser();
    string ID = me->getId();
	*fout << "2.2. 로그아웃" << endl ;
    *fout << "> " << ID << endl ;
}

void LogOut::logoutSubmit()
{
    currentUser->deleteCurrentUser();
 	return;
}