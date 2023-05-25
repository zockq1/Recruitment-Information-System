#pragma once
#include "../Entity/CurrentUser.h"
#include "../Entity/UserCollection.h"

using namespace std;

class Apply {
private:
public:
	string addApplicant(CurrentUser *currentUser, UserCollection * userCollection, string businessNumber);
};