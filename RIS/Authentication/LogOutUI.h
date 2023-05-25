#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "LogOut.h"

using namespace std;

class LogOutUI {
private:
	LogOut *control;
public:
	LogOutUI(LogOut *control);
	void logoutSubmit(ofstream *fout);
};