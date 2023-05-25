#pragma once
#include "User.h"
#include "RecruitmentCollection.h"


class CompanyUser : public User
{
private:
  string companyName;
  string businessNumber;

public:
  CompanyUser(string companyName, string businessNumber,string id, string password, UserType userType);
  string getNumber();
  string getName();
  void addNewRecruitment(string job, int numberOfHires, string deadline);
};

