#include <fstream>
#include <string>
#include "Login.h"
#include "LoginUI.h"
using namespace std;
#pragma once

LoginUI::LoginUI(Login *control)
{
    this->control=control;
}

void LoginUI::loginSubmit(ifstream *fin, ofstream *fout)
{
    string id;
    string password;

    *fin >> id >> password;
    this->control->loginSubmit(id, password);

    *fout << "2.1. 로그인" << endl;
    *fout << "> " << id << " " << password << endl;

    return;
}