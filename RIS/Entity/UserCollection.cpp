#include "UserCollection.h"
#include "NormalUser.h"
#include "CompanyUser.h"
#include "../types.h"
#include <iostream>

void UserCollection::signUpNormalUser(string inputName, string inputRegistrationNumber, string inputId, string inputPassword){
    UserType userType = UserType::NORMAL_USER;
    NormalUser *nUser = new NormalUser(inputName, inputRegistrationNumber, inputId, inputPassword, userType);
    users.push_back(nUser);
}

void UserCollection::signUpCompanylUser(string inputCompanyName, string inputBusinessNumber, string inputId, string inputPassword){
    UserType userType = UserType::COMPANY_USER;
    CompanyUser *cUser = new CompanyUser(inputCompanyName, inputBusinessNumber, inputId, inputPassword, userType);
    users.push_back(cUser);
}

void UserCollection::deleteAccount(User *me){
    int count = (this->users).size();
    for(auto it = this->users.begin(); it != this->users.end(); it++)
    {
        if((*it) == me)
            this->users.erase(it);
    }
}

User *UserCollection::findByBusinessNumber(string businessNumber){
    for(auto it = this->users.begin(); it != this->users.end(); it++)
    {
        if((*it)->getUserType() == UserType::COMPANY_USER){
            if((*it)->getNumber() == businessNumber)
            return *it;
        }
    }
}

User *UserCollection::findByCompanyName(string companyName){
    for(auto it = this->users.begin(); it != this->users.end(); it++)
    {
        if((*it)->getUserType() == UserType::COMPANY_USER){
            
            if((*it)->getName() == companyName)
            return *it;
        }
    }
}

User *UserCollection::findByCredential(string id, string password){
    int count = (this->users).size();
    for(auto it = this->users.begin(); it != this->users.end(); it++)
    {
        if((*it)->getId() == id)
            if ((*it)->getPassword() == password)
                return *it;
    }
}