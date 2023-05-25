#include "UserCollection.h"
#include "NormalUser.h"
#include "CompanyUser.h"
#include "types.h"


class UserCollection
{
private:
  list<User*> users;
public:
  void signUpNormalUser(string inputName, string inputRegistrationNumber, string inputId, string inputPassword);
  void signUpCompanylUser(string inputCompanyName, string inputBusinessNumber, string inputId, string inputPassword);
  void deleteAccount();
  User *findByBusinessNumber(string businessNumber);
  User *findByCompanyName(string companyName);
  User *findByCredential(string id, string password);
};


void UserCollection::signUpNormalUser(string inputName, string inputRegistrationNumber, string inputId, string inputPassword){
    NormalUser *nUser = new NormalUser(inputName, inputRegistrationNumber, inputId, inputPassword, NORMAL_USER);
    users.push_back(nUser);
}

void UserCollection::signUpCompanylUser(string inputCompanyName, string inputBusinessNumber, string inputId, string inputPassword){
    CompanyUser *cUser = new CompanyUser(inputCompanyName, inputBusinessNumber, inputId, inputPassword, NORMAL_USER);
    users.push_back(cUser);
}