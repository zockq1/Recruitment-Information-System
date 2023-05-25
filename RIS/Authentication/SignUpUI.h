#include <fstream>
#include <string>
#include "SignUp.h"
using namespace std;
#pragma once

class SignUpUI {
    private:
        SignUp *control;
    public:
        SignUpUI(SignUp *control);
        void signUpNormalUser(ifstream *fin, ofstream *fout);

        void signUpCompanyUser(ifstream *fin, ofstream *fout);
    
};