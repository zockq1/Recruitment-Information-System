#pragma once
#include "Application.h"
#include <list>
using namespace std;

class ApplicationCollection
{
private:
  list<Application*> ownedApplication;
public:
  ApplicationCollection();
  list<Application*> getOwnedApplication();
  void addApplication(string companyName, string businessNumber, string job, int numberOfHires, string deadline);
};

