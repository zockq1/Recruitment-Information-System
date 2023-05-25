#include "RecruitmentInformation.h"
#include "../Entity/CompanyUser.h"
#include "../Entity/CurrentUser.h"

string RecruitmentInformation::showRecruitmentList()
{
  CompanyUser *me = currentUser.getCurrentUser();
  RecruitmentCollection *myCollection = me->getOwnedRecruitmentCollection();
  Recruitment **myRecruitment = myCollection->getOwnedRecruitment();
  int count = myCollection->getCount();

  string output;
  for (int i = 0; i < count; i++)
  {
    RecruitmentInfo info = myRecruitment[i]->getInfo();
    output += "> " + info.job + " " + to_string(info.numberOfHires) + " " + info.deadline + "\n";
  }

  return output;
}

