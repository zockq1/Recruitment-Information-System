#pragma once
#include "User.h"


class CompanyUser : public User
{
private:
  string companyName;
  string businessNumber;
  RecruitmentCollection *ownedRecruitmentCollection;

public:
  CompanyUser();
  void addNewRecruitment(string companyName, string job, int numberOgHires, string deadline, string businessNumber);
  RecruitmentCollection *getOwnedRecruitmentCollection();
};

