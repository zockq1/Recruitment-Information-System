#include <fstream>
#include <string>
#include "SignOut.h"
using namespace std;
#pragma once

class SignOutUI{
    private:
        SignOut *control;
    public:
        SignOutUI(SignOut *control);
        void deleteAccount(ofstream *fout);

};