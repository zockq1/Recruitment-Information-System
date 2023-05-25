#include <iostream>
#include <string>
#include <fstream>
#include "ApplicationInformationList.h"
#include "ApplicationInformationListUI.h"
#include "../Entity/CurrentUser.h"
#include "../Entity/UserCollection.h"
#include "../Entity/ApplicationCollection.h"
#include "../Entity/Application.h"
#include "../Entity/NormalUser.h"
#include "../types.h"

extern CurrentUser* currentUser;
extern UserCollection* userCollection;

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

string ApplicationInformationList::showApplicationList()
{
 	NormalUser *nUser = (NormalUser*)(currentUser->getCurrentUser());
    ApplicationCollection *appCollection = nUser->getOwnedApplicationCollection();
	
    list<Application*> ownedApp = appCollection->getOwnedApplication();

    string output;

    for (auto it = ownedApp.begin(); it != ownedApp.end(); ++it) {
        ApplicationInfo info = (*it)->getInfo();
        output += "> " + info.companyName + " " + info.businessNumber + " " + info.job + " " + to_string(info.numberOfHires) + " " + info.deadline + "\n";
    }
    return output;
}