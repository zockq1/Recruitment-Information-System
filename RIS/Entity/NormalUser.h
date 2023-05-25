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
  string getNumber();
  string getName();
  void addNewRecruitment(Recruitment* recruitment);
};
