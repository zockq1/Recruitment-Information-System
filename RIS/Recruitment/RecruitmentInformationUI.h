#pragma once
#include <string>
#include <fstream>
#include "RecruitmentInformation.h"
#include "../Entity/CurrentUser.h"
using namespace std;

class RecruitmentInformationUI
{
  private:
    RecruitmentInformation* control;
  public:
    RecruitmentInformationUI(RecruitmentInformation *control);
    void showRecruitmentList(CurrentUser *currentUser, ofstream *fout);
};