#pragma once
#include "User.h"
#include "RecruitmentCollection.h"


class CompanyUser : public User
{
private:
  string companyName;
  string businessNumber;
  RecruitmentCollection *ownedRecruitmentCollection;

public:
  CompanyUser();
  void addNewRecruitment(string job, int numberOgHires, string deadline);
  RecruitmentCollection *getOwnedRecruitmentCollection();
};

