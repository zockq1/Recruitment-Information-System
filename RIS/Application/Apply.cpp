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
	*fout << "4.2. 채용 지원" << endl ;
	*fout << output << endl ;
}

string Apply::addApplicant(CurrentUser *currentUser, UserCollection * userCollection, string businessNumber)
{
 	NormalUser *me = dynamic_cast<NormalUser*>(currentUser->getCurrentUser()); //일반회원
	CompanyUser *find = dynamic_cast<CompanyUser*>(userCollection->findByBusinessNumber(businessNumber)); //회사회원
	RecruitmentCollection *recruitmentCollection = find->getOwnedRecruitmentCollection();
	list<Recruitment*> rcruit = recruitmentCollection->getOwnedRecruitment();
  
  	Recruitment *selected;
  	RecruitmentInfo info;
	for (auto it = rcruit.begin(); it != rcruit.end(); ++it)
	{
		selected = (*it);
		info = (*it)->getInfo();
	}

	me->addNewRecruitment(selected);

	string output;
	output += "> " + info.companyName + " " + info.businessNumber + " " + info.job + "\n";

	return output;
}