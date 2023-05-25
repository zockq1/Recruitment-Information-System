#include <fstream>
#include <string>
#include "SignUp.h"
#include "SignUpUI.h"
#include "../Entity/UserCollection.h"
using namespace std;

void SignUp::signUpNormalUser(UserCollection *usercollection, string inputName,  string inputRegistrationNumber,  string inputId, string inputPassword)
{
    userCollection->signUpNormalUser(inputName, inputRegistrationNumber, inputId, inputPassword);
}

void SignUp::signUpCompanyUser(UserCollection *usercollection, string inputCompanyName, string inputBusinessNumber, string inputId, string inputPassword )
{
    userCollection->signUpCompanylUser(inputCompanyName, inputBusinessNumber, inputId, inputPassword);
}