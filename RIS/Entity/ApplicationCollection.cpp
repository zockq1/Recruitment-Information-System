#include "ApplicationCollection.h"

list<Application*> ApplicationCollection::getOwnedApplication(){
  return this->ownedApplication;
}

void ApplicationCollection::addApplication(string companyName, string businessNumber, string job, int numberOfHires, string deadline){
  Application *newApplication = new Application(companyName, businessNumber, job, numberOfHires, deadline);
  this->ownedApplication.push_back(newApplication);
}