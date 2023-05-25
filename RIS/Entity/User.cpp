#include "User.h"

string User::getId(){
  return this->id;
}

string User::getPassword(){
  return this->password;
}

UserType User::getUserType(){
  return this->userType;
}

void User::setId(string id) {
	this->id = id;
}

void User::setPassword(string password) {
	this->password = password;
}

void User::setUserType(UserType userType) {
	this->userType = userType;
}

void User::setCollection(){
  this->ownedRecruitmentCollection = new RecruitmentCollection();
}

RecruitmentCollection *User::getOwnedRecruitmentCollection(){
  return this->ownedRecruitmentCollection;
}

void User::addNewRecruitment(Recruitment *recruitment){
    this->getOwnedRecruitmentCollection()->addRecruitment(recruitment);
}