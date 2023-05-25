#pragma once
#include "CompanyUser.h"

CompanyUser::CompanyUser(string companyName, string businessNumber, string id, string password, UserType userType){
    this->companyName=companyName;
    this->businessNumber=businessNumber;
    this->setId(id);
    this->setPassword(password);
    this->setUserType(userType);
    this->ownedRecruitmentCollection = new RecruitmentCollection();
}

void CompanyUser::addNewRecruitment(string job, int numberOfHires, string deadline){
    this->ownedRecruitmentCollection->addRecruitment(companyName, businessNumber, job, numberOfHires, deadline);
}

RecruitmentCollection *CompanyUser::getOwnedRecruitmentCollection(){
    return this->ownedRecruitmentCollection;
}

string CompanyUser::getBusinessNumber(){
  return this->businessNumber;
}

string CompanyUser::getCompanyName(){
  return this->companyName;
}