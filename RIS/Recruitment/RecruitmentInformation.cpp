#include "RecruitmentInformation.h"
#include "../Entity/CompanyUser.h"
#include "../Entity/CurrentUser.h"

list<string> RecruitmentInformation::showRecruitmentList()
{
  CompanyUser *me = currentUser.getCurrentUser();
  RecruitmentCollection *myCollection = me->getOwnedRecruitmentCollection();
  Recruitment **myRecruitment = myCollection->getOwnedRecruitment();
  int count = myCollection->getCount();

  list<string> output;
  for (int i = 0; i < count; i++)
  {
    RecruitmentInfo info = myRecruitment[i]->getInfo();
    output.push_back(info.job + " " + to_string(info.numberOfHires) + " " + info.deadline);
  }

  return output;
}