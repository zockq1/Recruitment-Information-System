#include "NormalUser.h"

NormalUser::NormalUser(string name, string registrationNumber, string ID, string password, UserType userType){
    name=name;
    registrationNumber=registrationNumber;
    ID = ID;
    password = password;
    userType = userType;
    ownedApplicationCollection = new ApplicationCollection();
}

void NormalUser::addNewApplication(string companyName, string businessNumber, string job, int numberOfHires, string deadline){
    this->ownedApplicationCollection->addApplication(companyName, businessNumber, job, numberOfHires, deadline);
}

ApplicationCollection *NormalUser::getOwnedApplicationCollection(){
    return this->ownedApplicationCollection;
}