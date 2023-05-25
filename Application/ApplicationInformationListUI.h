#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class ApplicationInformationListUI {
private:
	ApplicationInformationList *control;
public:
	ApplicationInformationListUI(ApplicationInformationList *control);
	void showApplicationList(ofstream *fout);
};