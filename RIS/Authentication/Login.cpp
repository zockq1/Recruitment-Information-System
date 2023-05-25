#include <fstream>
#include <string>
#include "Login.h"
#include "LoginUI.h"
#include "UserCollection.h"
#include "CurrentUser.h"
using namespace std;

extern UserCollection *userCollection;
extern CurrentUser *currentUser;

void Login::loginSubmit(string inputId, string inputPassWord)
{
    User *me = userCollection->findByCredential(inputId, inputPassWord);
    currentUser->login(me);
}
