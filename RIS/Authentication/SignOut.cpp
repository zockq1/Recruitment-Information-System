#include <fstream>
#include <string>
#include "SignOut.h"
#include "SignOutUI.h"
#include "../Entity/CurrentUser.h"
#include "../Entity/UserCollection.h"
using namespace std;

string SignOut::deleteAccount(CurrentUser *currentUser, UserCollection *userCollection)
{
   User *me = currentUser->getCurrentUser();
   string id = me->getId();
   currentUser->deleteCurrentUser();
   userCollection->deleteAccount(me);
   return id;

}

