#pragma once
#include <fstream>
#include "Apply.h"
#include "../Entity/CurrentUser.h"
#include "../Entity/UserCollection.h"

using namespace std;

class ApplyUI {
private:
	Apply *control;
public:
	ApplyUI(Apply *control);
	void apply(CurrentUser *currentUser, UserCollection * userCollection, ifstream *fin, ofstream *fout);
};