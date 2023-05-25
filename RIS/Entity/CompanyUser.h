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
  virtual string getNumber();
  virtual string getName();
  virtual void addNewRecruitment(string job, int numberOfHires, string deadline);
  virtual void addNewRecruitment(Recruitment* recruitment);
};

