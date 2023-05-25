#include <iostream>
#include <string>
#include <fstream>
#include "Apply.h"
#include "ApplyUI.h"
#include "../types.h"
#include "../Entity/RecruitmentCollection.h"
#include "../Entity/CompanyUser.h"
#include "../Entity/CurrentUser.h"
#include "../Entity/UserCollection.h"
#include "../Entity/Recruitment.h"
extern CurrentUser* currentUser;
extern UserCollection* userCollection;

using namespace std;

ApplyUI::ApplyUI(Apply *control)
{
	this->control = control;
}

void ApplyUI::apply(ifstream *fin, ofstream *fout) 
{
	string businessNumber;
	*fin >> businessNumber;
	string output = this->control->addApplicant(businessNumber);
	*fout << "4.2. 채용 지원" << endl ;
	*fout << output << endl ;
}

string Apply::addApplicant(string businessNumber)
{
 	User *nUser = currentUser->getCurrentUser(); //전역
	CompanyUser *cUser = userCollection->FindByBusinessNumber(businessNumber); //전역
	RecruitmentCollection *rcollection = cUser->getOwnedCollection();
	Recruitment *rcruit = rcollection->FindByBusinessNumber();

	string output;
	RecruitmentInfo info = rcruit->getInfo();
	output += "> " + info.companyName + " " + info.businessNumber + " " + info.job + "\n";

	return output;
}