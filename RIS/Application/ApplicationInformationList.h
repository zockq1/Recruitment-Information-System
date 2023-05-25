#pragma once
#include <iostream>
#include <string>
#include "../Entity/CurrentUser.h"

using namespace std;

class ApplicationInformationList {
private:
public:
	string showApplicationList(CurrentUser *currentUser);
};