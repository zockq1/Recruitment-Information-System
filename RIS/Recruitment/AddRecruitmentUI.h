#pragma once
#include <string>
#include <fstream>
#include "AddRecruitment.h"
using namespace std;

class AddRecruitmentUI {
  private:
    AddRecruitment* control;
  public:
    AddRecruitmentUI(AddRecruitment *control);
    void addNewRecruitment(ifstream *fin, ofstream *fout);
};