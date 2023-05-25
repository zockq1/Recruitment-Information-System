#pragma once
#include "User.h"
#include "ApplicationCollection.h"

class NormalUser : public User
{
private:
  string name;
  string registrationNumber;
  ApplicationCollection *ownedApplicationCollection;

public:
  NormalUser(string name, string registrationNumber,string ID, string password, UserType userType);
  void addNewApplication(string companyName, string businessNumber, string job, int numberOfHires, string deadline);
  ApplicationCollection *getOwnedApplicationCollection();
};
