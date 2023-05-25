#include <fstream>
#include <string>
#include "SignOut.h"
#include "SignOutUI.h"
using namespace std;


SignOutUI::SignOutUI(SignOut *control)
{
    this->control=control;
}

void SignOutUI::deleteAccount(CurrentUser *currentUser, UserCollection *userCollection, ofstream *fout)
{   
    string id = this->control->deleteAccount(currentUser, userCollection);

    *fout << "1.2. Withdrawal" << endl;
    *fout << "> " << id ;

    return;
}