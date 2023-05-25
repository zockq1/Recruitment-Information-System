#include <fstream>
#include <string>
#include "SignOut.h"
#include "SignOutUI.h"
#include "CurrentUser.h"
#include "UserCollection.h"
using namespace std;

extern CurrentUser *currentUser;
extern UserCollection *userCollection;

string SignOut::deleteAccount()
{
   User *me = currentUser->getCurrentUser();
   string id = me->getId();
   currentUser->deleteCurrentUser();
   userCollection->deleteAccount(me);
   return id;

}

