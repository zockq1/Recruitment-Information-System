#include <fstream>
#include <string>
#include "SignOut.h"
#include "SignOutUI.h"
using namespace std;
#pragma once

SignOutUI::SignOutUI(SignOut *control)
{
    this->control=control;
}

void SignOutUI::deleteAccount(ofstream *fout)
{   
    string id = this->control->deleteAccount();

    *fout << "1.2. 회원탈퇴" << endl;
    *fout << "> " << id ;

    return;
}