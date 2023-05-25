#ifndef CURRENTUSER_H
#define CURRENTUSER_H

#include "User.h"

class CurrentUser
{
private:
  User *me;
public:
  CurrentUser();
  void login(User *me);
  User *getCurrentUser();
  void deleteCurrentUser();
};

static CurrentUser* currentUser = new CurrentUser();

#endif