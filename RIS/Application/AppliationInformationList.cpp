#include <iostream>
#include <string>
#include <fstream>
#include "ApplicationInformationList.h"
#include "ApplicationInformationListUI.h"
#include "../Entity/CurrentUser.h"
#include "../Entity/UserCollection.h"
#include "../Entity/NormalUser.h"
#include "../types.h"



using namespace std;

ApplicationInformationListUI::ApplicationInformationListUI(ApplicationInformationList *control)
{
	this->control = control;
}

void ApplicationInformationListUI::showApplicationList(CurrentUser *currentUser, ofstream *fout) 
{
	string output = this->control->showApplicationList(currentUser);
	*fout << "4.3. Check Application Information" << endl << "> ";
    *fout << output << endl ;
}

string ApplicationInformationList::showApplicationList(CurrentUser *currentUser)
{
 	User *me = currentUser->getCurrentUser();
    RecruitmentCollection *recruitmentCollection = me->getOwnedRecruitmentCollection();
	
    list<Recruitment*> ownedRecruitment = recruitmentCollection->getOwnedRecruitment();

    string output;

    for (auto it = ownedRecruitment.begin(); it != ownedRecruitment.end(); ++it) {
        RecruitmentInfo info = (*it)->getInfo();
        output += "> " + info.companyName + " " + info.businessNumber + " " + info.job + " " + to_string(info.numberOfHires) + " " + info.deadline + "\n";
    }
    return output;
}