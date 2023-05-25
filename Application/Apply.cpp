#include <iostream>
#include <string>
#include <fstream>
#include "Apply.h"
#include "ApplyUI.h"
#include "Entity/UserCollection.h"
#include "Entity/RecruitmentCollection.h"
#include "Entity/CompanyUser.h"

using namespace std;

ApplyUI::ApplyUI(Apply *control)
{
	this->control = control;
}

void ApplyUI::apply(ifstream *fin, ofstream *fout) 
{
	string output = this->control->addApplicant(businessNumber);
	*fout << "4.2. 채용 지원" << endl;
	*fout << output << endl ;
}

void Apply::addApplicant(int businessNumber)
{
 	User *nUser = CurrentUser->getCurrentUser();
	CompanyUser *cUser = UserCollection->UserFindByBusinessNumber(businessNumber); 
	RecruitmentCollection *rcollection = cUser->getOwnedRecruitmentCollection();
	Recruitment *rcruit = rcollection->FindByBusinessNumber();
	
	RecruitmentInfo info = rcruit->getInfo();

	string output;

	RecruitmentInfo info = myRecruitment[i]->getInfo();
	output += "> " + info.companyName + " " + info.businessNumber + " " + info.job + "\n";

	return output;
}