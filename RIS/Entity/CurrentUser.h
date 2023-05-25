#ifndef CURRENTUSER_H
#define CURRENTUSER_H

#include "User.h"

class CurrentUser
{
private:
  User me;
public:
  CurrentUser();
  void login();
  User getCurrentUser();
  void deleteCurrentUser();
};

extern CurrentUser* currentUser;

#endif