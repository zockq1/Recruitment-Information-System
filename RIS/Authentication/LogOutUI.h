#pragma once
#include "LogOut.h"

using namespace std;

class LogOutUI {
private:
	LogOut *control;
public:
	LogOutUI(LogOut *control);
	void logoutSubmit(ofstream *fout);
};