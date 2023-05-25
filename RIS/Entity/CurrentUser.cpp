#pragma once
#include "CurrentUser.h"

CurrentUser::CurrentUser()
{
    me = nullptr;
}

void CurrentUser::login(User* user)
{
    this->me = user;
}

User* CurrentUser::getCurrentUser()
{
    return me;
}

void CurrentUser::deleteCurrentUser()
{
    me = nullptr;
}