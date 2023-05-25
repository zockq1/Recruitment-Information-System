#include <fstream>
#include <string>
using namespace std;
#pragma once

class SignOut{
    public:
        string deleteAccount(CurrentUser *currentUser, UserCollection *userCollection);
};