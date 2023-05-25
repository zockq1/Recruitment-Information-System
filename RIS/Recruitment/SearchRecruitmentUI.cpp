#include <fstream>
#include "SearchRecruitment.h"
#include "SearchRecruitmentUI.h"

SearchRecruitmentUI::SearchRecruitmentUI(SearchRecruitment *control)
{
  this->control = control;
}

void SearchRecruitmentUI::search(UserCollection *userCollection, ifstream *fin, ofstream *fout)
{
  string companyName;
  *fin >> companyName;
  string output = this->control->search(userCollection, companyName);

  *fout << "4.1 Search Recruitment Posting" << endl;
  *fout << output << endl;

  return;
}