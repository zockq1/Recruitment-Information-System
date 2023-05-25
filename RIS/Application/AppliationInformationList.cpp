#include <iostream>
#include <string>
#include <fstream>
#include "ApplicationInformationList.h"
#include "ApplicationInformationListUI.h"
#include "../Entity/CurrentUser.h"
#include "../Entity/UserCollection.h"
#include "../Entity/ApplicationCollection.h"
#include "../Entity/Application.h"

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
 	User *nUser = currentUser->getCurrentUser();
    ApplicationCollection *appCollection = nUser->getOwnedCollection();
	
    Application **ownedApp = appCollection->getOwnedApplication();
    int appCount = appCollection->getCount();

    string output;

    for(int i=0; i<appCount; i++)
        ApplicationInfo info = ownedApp[i]->getInfo();
        output += "> " + info.companyName + " " + info.businessNumber + " " + info.job + " " + info.numberOfHires + " " + info.deadline + "\n";

    return output;
}