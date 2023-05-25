#include "RecruitmentInformation.h"
#include "../Entity/CompanyUser.h"
#include "../Entity/CurrentUser.h"

extern CurrentUser* currentUser;

string RecruitmentInformation::showRecruitmentList()
{
  CompanyUser *me = dynamic_cast<CompanyUser*>(currentUser->getCurrentUser());
  RecruitmentCollection *myCollection = me->getOwnedRecruitmentCollection();
  list<Recruitment*> myRecruitment = myCollection->getOwnedRecruitment();
  
  string output;
  for (auto it = myRecruitment.begin(); it != myRecruitment.end(); ++it)
  {
    RecruitmentInfo info = (*it)->getInfo();
    output += "> " + info.job + " " + to_string(info.numberOfHires) + " " + info.deadline + "\n";
  }

  return output;
}

