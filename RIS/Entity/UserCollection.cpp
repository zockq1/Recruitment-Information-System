#include "UserCollection.h"
#include "NormalUser.h"
#include "CompanyUser.h"
#include "types.h"

void UserCollection::signUpNormalUser(string inputName, string inputRegistrationNumber, string inputId, string inputPassword){
    NormalUser *nUser = new NormalUser(inputName, inputRegistrationNumber, inputId, inputPassword, NORMAL_USER);
    users.push_back(nUser);
}

void UserCollection::signUpCompanylUser(string inputCompanyName, string inputBusinessNumber, string inputId, string inputPassword){
    CompanyUser *cUser = new CompanyUser(inputCompanyName, inputBusinessNumber, inputId, inputPassword, NORMAL_USER);
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
    int count = (this->users).size();
    for(auto it = this->users.begin(); it != this->users.end(); it++)
    {
        if(((CompanyUser*)(*it))->getBusinessNumber() == businessNumber)
            return *it;
    }
}

User *UserCollection::findByCompanyName(string companyName){
    int count = (this->users).size();
    for(auto it = this->users.begin(); it != this->users.end(); it++)
    {
        if(((CompanyUser*)(*it))->getCompanyName() == companyName)
            return *it;
    }
}

User *UserCollection::findByCredential(string id, string password){
    int count = (this->users).size();
    for(auto it = this->users.begin(); it != this->users.end(); it++)
    {
        if(((CompanyUser*)(*it))->getId() == id)
            if (((CompanyUser*)(*it))->getPassword() == password)
                return *it;
    }
}