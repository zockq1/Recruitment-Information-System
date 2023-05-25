#include <iostream>
#include <string>
#include <fstream>
#include "Apply.h"
#include "ApplyUI.h"
#include "../types.h"
#include "../Entity/RecruitmentCollection.h"
#include "../Entity/CompanyUser.h"
#include "../Entity/Recruitment.h"
#include "../Entity/NormalUser.h"

using namespace std;

ApplyUI::ApplyUI(Apply *control)
{
	this->control = control;
}

void ApplyUI::apply(CurrentUser *currentUser, UserCollection * userCollection, ifstream *fin, ofstream *fout) 
{
	string businessNumber;
	*fin >> businessNumber;
	string output = this->control->addApplicant(currentUser, userCollection, businessNumber);
	*fout << "4.2. Job Application" << endl ;
	*fout << output << endl ;
}

string Apply::addApplicant(CurrentUser *currentUser, UserCollection * userCollection, string businessNumber)
{
 	User *me = currentUser->getCurrentUser(); //일반회원
	User *find = userCollection->findByBusinessNumber(businessNumber); //회사회원
	RecruitmentCollection *recruitmentCollection = find->getOwnedRecruitmentCollection();
	list<Recruitment*> rcruit = recruitmentCollection->getOwnedRecruitment();
  

	Recruitment* selected = rcruit.back();//new Recruitment();
    RecruitmentInfo info = selected->getInfo();

	me->addNewRecruitment(selected);

	string output;
	output += "> " + info.companyName + " " + info.businessNumber + " " + info.job + "\n";

	return output;
}