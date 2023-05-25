#include <fstream>
#include <string>
#include "Login.h"
using namespace std;
#pragma once

class LoginUI{
    private:
        Login *control;
    public:
        LoginUI(Login *control);
        void loginSubmit(ifstream *fin, ofstream *fout);

};