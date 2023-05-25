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
        void loginSubmit(CurrentUser *currentUser, UserCollection *userCollection, ifstream *fin, ofstream *fout);

};