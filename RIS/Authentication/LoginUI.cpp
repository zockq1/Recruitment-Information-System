#include <fstream>
#include <string>
#include "Login.h"
#include "LoginUI.h"
using namespace std;


LoginUI::LoginUI(Login *control)
{
    this->control=control;
}

void LoginUI::loginSubmit(CurrentUser *currentUser, UserCollection *userCollection, ifstream *fin, ofstream *fout)
{
    string id;
    string password;

    *fin >> id >> password;
    this->control->loginSubmit(currentUser, userCollection, id, password);

    *fout << "2.1. Login" << endl;
    *fout << "> " << id << " " << password << endl << endl;

    return;
}