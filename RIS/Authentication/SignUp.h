﻿#include <fstream>
#include <string>
using namespace std;
#pragma once

class SignUp {
    public:
    void signUpNormalUser(UserCollection *usercollection, string inputName,  string inputRegistrationNumber,  string inputId, string inputPassword);

    void signUpCompanyUser(UserCollection *usercollection, string inputCompanyName, string inputBusinessNumber, string inputId, string inputPassword);
    
};