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
