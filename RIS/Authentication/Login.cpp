#include <fstream>
#include <string>
#include "Login.h"
#include "LoginUI.h"
using namespace std;

void Login::loginSubmit(CurrentUser *currentUser, UserCollection *userCollection, string inputId, string inputPassWord)
{
    User *me = userCollection->findByCredential(inputId, inputPassWord);
    currentUser->login(me);
}
