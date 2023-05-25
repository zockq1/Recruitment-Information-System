#include <iostream>
#include <string>
#include <fstream>
#include "ApplicationInformationList.h"
#include "ApplicationInformationListUI.h"

using namespace std;

ApplicationInformationListUI::ApplicationInformationListUI(ApplicationInformationList *control)
{
	this->control = control;
}

void ApplicationInformationListUI::showApplicationList(ofstream *fout) 
{
	string output = this->control->showApplicationList();
	*fout << "4.3. 지원 정보 조회" << endl << "> ";
    *fout << output << endl ;
}

void ApplicationInformationList::showApplicationList()
{
 	User *nUser = CurrentUser->getCurrentUser();
    ApplicationCollection *appCollection = nUser->getOwnedCollection();
	
    Application *ownedApp = appCollection->getOwnedApplication()
    int appCount = appCollection->getCount();

    string output;

    for(int i=0; i<appCount; i++)
        ApplicationInfo info = ownedApp[i]->getInfo();
        output += "> " + info.companyName + " " + info.businessNumber + " " + info.job + " " + info.numberOfHires + " " + info.deadline + "\n";

    return output;
}