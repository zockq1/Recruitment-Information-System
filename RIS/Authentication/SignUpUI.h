#include <fstream>
#include <string>
#include "SignUp.h"
#include "../Entity/UserCollection.h"
using namespace std;
#pragma once

class SignUpUI {
    private:
        SignUp *control;
    public:
        SignUpUI(SignUp *control);
        void signUpNormalUser(UserCollection *usercollection, ifstream *fin, ofstream *fout);
        void signUpCompanyUser(UserCollection *usercollection, ifstream *fin, ofstream *fout);
    
};