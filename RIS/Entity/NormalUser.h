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
  NormalUser();
  void addNewApplication(string companyName, string job, int numberOgHires, string deadline);
  ApplicationCollection *getOwnedApplicationCollection();
};

