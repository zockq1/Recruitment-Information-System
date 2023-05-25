#pragma once
#include <string>
#include "../Entity/UserCollection.h"
using namespace std;

class SearchRecruitment {
  private:
  public:
    string search(UserCollection *userCollection, string companyName);
};