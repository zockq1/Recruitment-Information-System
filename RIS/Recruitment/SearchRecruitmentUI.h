#pragma once
#include <string>
#include <fstream>
#include "SearchRecruitment.h"
#include "../Entity/UserCollection.h"
using namespace std;

class SearchRecruitmentUI {
  private:
    SearchRecruitment* control;
  public:
    SearchRecruitmentUI(SearchRecruitment *control);
    void search(UserCollection *userCollection, ifstream *fin, ofstream *fout);
};