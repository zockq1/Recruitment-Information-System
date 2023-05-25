#include "RecruitmentInformation.h"
#include "CompanyUser.h"
#include "CurrentUser.h"

string RecruitmentInformation::showRecruitmentList()
{
  CompanyUser *me = (CompanyUser*)(currentUser->getCurrentUser());
  RecruitmentCollection *myCollection = me->getOwnedRecruitmentCollection();
  list<Recruitment*> myRecruitment = myCollection->getOwnedRecruitment();
  int count = myRecruitment.size();
  
  string output;
  for (auto it = myRecruitment.begin(); it != myRecruitment.end(); ++it)
  {
    RecruitmentInfo info = (*it)->getInfo();
    output += "> " + info.job + " " + to_string(info.numberOfHires) + " " + info.deadline + "\n";
  }

  return output;
}

