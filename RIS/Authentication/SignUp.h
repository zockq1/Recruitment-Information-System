#include <fstream>
#include <string>
using namespace std;
#pragma once

class SignUp {
    public:
    void signUpNormalUser(string inputName,  string inputRegistrationNumber,  string inputId, string inputPassword);

    void signUpCompanyUser(string inputCompanyName, string inputBusinessNumber, string inputId, string inputPassword);
    
};