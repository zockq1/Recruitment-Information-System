#include "SearchRecruitment.h"
#include "../Entity/UserCollection.h"
#include "../Entity/CompanyUser.h"

extern UserCollection* userCollection;

string SearchRecruitment::search(string companyName)
{
  CompanyUser *find = (CompanyUser*)(userCollection->findByCompanyName(companyName));
  RecruitmentCollection *findCollection = find->getOwnedRecruitmentCollection();
  list<Recruitment*> findRecruitment = findCollection->getOwnedRecruitment();
  int count = findRecruitment.size();
  
  string output;
  for (auto it = findRecruitment.begin(); it != findRecruitment.end(); ++it)
  {
    RecruitmentInfo info = (*it)->getInfo();
    output += "> " + info.companyName + " " + info.businessNumber + " " + info.job + " " + to_string(info.numberOfHires) + " " + info.deadline + "\n";
  }

  return output;
}
