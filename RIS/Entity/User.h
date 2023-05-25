#pragma once
#include <string>
#include "../types.h"
#include "ApplicationCollection.h"
using namespace std;


class User
{
private:
  string id;
  string password;
  UserType userType;

protected:
  void setId(string id);
  void setPassword(string password);
  void setUserType(UserType userType);
  
public:
  string getId();
  string getPassword();
  UserType getUserType();
};
