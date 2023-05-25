#include <fstream>
#include <string>
#include "../Entity/UserCollection.h"
#include "../Entity/CurrentUser.h"
using namespace std;
#pragma once

class Login {
    public:
    void loginSubmit(CurrentUser *currentUser, UserCollection *userCollection, string inputId, string inputPassWord);
};