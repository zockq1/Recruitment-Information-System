#pragma once
#include <string>
#include <fstream>
#include "RecruitmentInformation.h"
using namespace std;

class RecruitmentInformationUI
{
  private:
    RecruitmentInformation* control;
  public:
    RecruitmentInformationUI(RecruitmentInformation *control);
    void showRecruitmentList(ofstream *fout);
};