#include <fstream>
#include <string>
#include "SignUp.h"
#include "SignUpUI.h"
using namespace std;
#pragma once

SignUpUI::SignUpUI(SignUp *control)
{
    this->control=control;
}

void SignUpUI::signUpNormalUser(ifstream *fin, ofstream *fout)
{
    string name;
    string registrationNumber;
    string id;
    string password;

    *fin >> name >> registrationNumber >> id >> password;
    this->control->signUpNormalUser(name, registrationNumber, id, password);
    
    *fout << "1.1. 회원가입 " << endl;
    *fout << "> " << name << " " << registrationNumber << " " << id << " " << password << endl;

    return;
}

void SignUpUI::signUpCompanyUser(ifstream *fin, ofstream *fout)
{
    string companyName;
    string businessNumber;
    string id;
    string password;
    
    *fin >> companyName >> businessNumber >> id >> password;
    this->control->signUpCompanyUser(companyName, businessNumber, id, password);

    *fout << "1.1. 회원가입 " << endl;
    *fout << "> " << companyName << " " << businessNumber << " " << id << " " << password<< endl;

    return;
    }

