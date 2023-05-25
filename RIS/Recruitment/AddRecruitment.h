#pragma once
#include <string>
#include "../Entity/CurrentUser.h"
using namespace std;

class AddRecruitment {
  private:
  public:
    void addNewRecruitment(CurrentUser *currentUser, string newJob, int newNumberOfHires, string newDeadline);
};