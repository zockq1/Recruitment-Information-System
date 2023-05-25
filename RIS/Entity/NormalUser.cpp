#include "NormalUser.h"

NormalUser::NormalUser(string name, string registrationNumber, string id, string password, UserType userType){
    this->name=name;
    this->registrationNumber=registrationNumber;
    this->setId(id);
    this->setPassword(password);
    this->setUserType(userType);
    this->ownedApplicationCollection = new ApplicationCollection();
}

void NormalUser::addNewApplication(string companyName, string businessNumber, string job, int numberOfHires, string deadline){
    this->ownedApplicationCollection->addApplication(companyName, businessNumber, job, numberOfHires, deadline);
}

ApplicationCollection *NormalUser::getOwnedApplicationCollection(){
    return this->ownedApplicationCollection;
}