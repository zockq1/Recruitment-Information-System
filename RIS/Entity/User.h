#pragma once
#include <string>
#include "../types.h"
#include "RecruitmentCollection.h"
using namespace std;


class User
{
private:
  string id;
  string password;
  UserType userType;
  RecruitmentCollection *ownedRecruitmentCollection;

protected:
  void setId(string id);
  void setPassword(string password);
  void setUserType(UserType userType);
  void setCollection();
  
public:
  string getId();
  string getPassword();
  UserType getUserType();
  RecruitmentCollection *getOwnedRecruitmentCollection();
  virtual void addNewRecruitment() = 0;
  virtual string getNumber() = 0;
  virtual string getName() = 0;
};
