#include <fstream>
#include <string>
#include "SignOut.h"
#include "SignOutUI.h"
#include "../Entity/CurrentUser.h"
#include "../Entity/UserCollection.h"
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

