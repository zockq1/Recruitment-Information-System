#pragma once
#include <string>
#include <fstream>
#include "AddRecruitment.h"
#include "../Entity/CurrentUser.h"
using namespace std;

class AddRecruitmentUI {
  private:
    AddRecruitment* control;
  public:
    AddRecruitmentUI(AddRecruitment *control);
    void addNewRecruitment(CurrentUser *currentUser, ifstream *fin, ofstream *fout);
};