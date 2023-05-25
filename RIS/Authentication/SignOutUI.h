#include <fstream>
#include <string>
#include "SignOut.h"
#include "../Entity/CurrentUser.h"
#include "../Entity/UserCollection.h"
using namespace std;
#pragma once

class SignOutUI{
    private:
        SignOut *control;
    public:
        SignOutUI(SignOut *control);
        void deleteAccount(CurrentUser *currentUser, UserCollection *userCollection, ofstream *fout);

};