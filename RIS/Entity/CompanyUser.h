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
  CompanyUser(string companyName, string businessNumber,string id, string password, UserType userType);
  void addNewRecruitment(string job, int numberOfHires, string deadline);
  RecruitmentCollection *getOwnedRecruitmentCollection();
};

