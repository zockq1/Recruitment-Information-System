#include <fstream>
#include <string>
#include "SignUp.h"
#include "SignUpUI.h"
using namespace std;


SignUpUI::SignUpUI(SignUp *control)
{
    this->control=control;
}

void SignUpUI::signUpNormalUser(UserCollection *usercollection, ifstream *fin, ofstream *fout)
{
    string name;
    string registrationNumber;
    string id;
    string password;

    *fin >> name >> registrationNumber >> id >> password;
    this->control->signUpNormalUser(usercollection, name, registrationNumber, id, password);
    
    *fout << "1.1. SignUp" << endl;
    *fout << "> " << name << " " << registrationNumber << " " << id << " " << password << endl << endl;

    return;
}

void SignUpUI::signUpCompanyUser(UserCollection *usercollection, ifstream *fin, ofstream *fout)
{
    string companyName;
    string businessNumber;
    string id;
    string password;
    
    *fin >> companyName >> businessNumber >> id >> password;
    this->control->signUpCompanyUser(usercollection, companyName, businessNumber, id, password);

    *fout << "1.1. SignUp"<< endl;
    *fout << "> " << companyName << " " << businessNumber << " " << id << " " << password << endl << endl;

    return;
    }

