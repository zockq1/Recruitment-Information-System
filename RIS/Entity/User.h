#pragma once
#include <string>
#include "types.h"
#include "ApplicationCollection.h"
using namespace std;


class User
{
private:
  string id;
  string password;
  UserType userType;
public:
  void findUserbyCredential();
  string getId();
  UserType getUserType();
};
