#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "../Entity/CurrentUser.h"

using namespace std;

class ApplicationInformationListUI {
private:
	ApplicationInformationList *control;
public:
	ApplicationInformationListUI(ApplicationInformationList *control);
	void showApplicationList(CurrentUser* currentUser, ofstream *fout);
};