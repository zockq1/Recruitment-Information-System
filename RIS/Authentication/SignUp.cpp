#include <fstream>
#include <string>
#include "SignUp.h"
#include "SignUpUI.h"
#include "UserCollection.h"
using namespace std;

extern UserCollection *userCollection;

void SignUp::signUpNormalUser(string inputName,  string inputRegistrationNumber,  string inputId, string inputPassword)
{
    userCollection->signUpNormalUser(inputName, inputRegistrationNumber, inputId, inputPassword);
}

void SignUp::signUpCompanyUser(string inputCompanyName, string inputBusinessNumber, string inputId, string inputPassword )
{
    userCollection->signUpCompanylUser(inputCompanyName, inputBusinessNumber, inputId, inputPassword);
}