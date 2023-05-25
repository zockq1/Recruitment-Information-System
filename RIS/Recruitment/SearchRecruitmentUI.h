#pragma once
#include <string>
#include <fstream>
#include "SearchRecruitment.h"
using namespace std;

class SearchRecruitmentUI {
  private:
    SearchRecruitment* control;
  public:
    SearchRecruitmentUI(SearchRecruitment *control);
    void search(ifstream *fin, ofstream *fout);
};