#pragma once
#include "User.h"
#include "RecruitmentCollection.h"

class NormalUser : public User
{
private:
  string name;
  string registrationNumber;

public:
  NormalUser(string name, string registrationNumber,string ID, string password, UserType userType);
  virtual string getNumber();
  virtual string getName();
  virtual void addNewRecruitment(Recruitment* recruitment);
  virtual void addNewRecruitment(string job, int numberOfHires, string deadline);
};
