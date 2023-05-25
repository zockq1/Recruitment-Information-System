#pragma once
#include "CompanyUser.h"

CompanyUser::CompanyUser(string companyName, string businessNumber, string id, string password, UserType userType){
    this->companyName=companyName;
    this->businessNumber=businessNumber;
    this->setId(id);
    this->setPassword(password);
    this->setUserType(userType);
    this->setCollection();
}

void CompanyUser::addNewRecruitment(string job, int numberOfHires, string deadline){

    this->getOwnedRecruitmentCollection()->addRecruitment(this->companyName, this->businessNumber, job, numberOfHires, deadline);
}

void CompanyUser::addNewRecruitment(Recruitment *recruitment){
  
}

string CompanyUser::getNumber(){
  return this->businessNumber;
}

string CompanyUser::getName(){
  return this->companyName;
}