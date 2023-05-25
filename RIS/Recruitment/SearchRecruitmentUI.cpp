#include <fstream>
#include "SearchRecruitment.h"
#include "SearchRecruitmentUI.h"

SearchRecruitmentUI::SearchRecruitmentUI(SearchRecruitment *control)
{
  this->control = control;
}

void SearchRecruitmentUI::search(ifstream *fin, ofstream *fout)
{
  string companyName;
  *fin >> companyName;
  string output = this->control->search(companyName);

  *fout << "4.1. 채용 정보 검색" << endl;
  *fout << output << endl;

  return;
}