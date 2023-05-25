#pragma once
#include <list>
#include "User.h"
using namespace std;

class UserCollection
{
private:
  list<User*> users;
public:
  void signUpNormalUser(string inputName, string inputRegistrationNumber, string inputId, string inputPassword);
  void signUpCompanylUser(string inputCompanyName, string inputBusinessNumber, string inputId, string inputPassword);
  void deleteAccount();
  User findByBusinessNumber(string businessNumber);
  User findByCompanyName(string companyName);
};
