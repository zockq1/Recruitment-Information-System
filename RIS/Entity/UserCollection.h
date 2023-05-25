#ifndef USERCOLLECTION_H
#define USERCOLLECTION_H

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
  void deleteAccount(User *me);
  User *findByBusinessNumber(string businessNumber);
  User *findByCompanyName(string companyName);
  User *findByCredential(string id, string password);
};


#endif