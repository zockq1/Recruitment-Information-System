#include "NormalUser.h"

NormalUser::NormalUser(string name, string registrationNumber, string id, string password, UserType userType){
    this->name=name;
    this->registrationNumber=registrationNumber;
    this->setId(id);
    this->setPassword(password);
    this->setUserType(userType);
    this->setCollection();
}




string NormalUser::getNumber(){
    return this->registrationNumber;
}

string NormalUser::getName(){
    return this->name;
}

void NormalUser::addNewRecruitment(string job, int numberOfHires, string deadline){
}
