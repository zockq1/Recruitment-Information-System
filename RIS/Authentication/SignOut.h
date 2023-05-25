#include <fstream>
#include <string>
#include "../Entity/CurrentUser.h"
#include "../Entity/UserCollection.h"
using namespace std;
#pragma once

class SignOut{
    public:
        string deleteAccount(CurrentUser *currentUser, UserCollection *userCollection);
};