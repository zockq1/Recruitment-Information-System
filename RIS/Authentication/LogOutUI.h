#pragma once
#include "LogOut.h"
#include "../Entity/CurrentUser.h"
using namespace std;

class LogOutUI {
private:
	LogOut *control;
public:
	LogOutUI(LogOut *control);
	void logoutSubmit(CurrentUser *currentUser, ofstream *fout);
};