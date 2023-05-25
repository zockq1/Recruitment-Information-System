#include <fstream>
#include "RecruitmentInformation.h"
#include "RecruitmentInformationUI.h"

RecruitmentInformationUI::RecruitmentInformationUI(RecruitmentInformation *control)
{
  this->control = control;
}

void RecruitmentInformationUI::showRecruitmentList(CurrentUser *currentUser, ofstream *fout)
{
  string ouput = this->control->showRecruitmentList(currentUser);

  *fout << "3.2. Check Recruitment Posting" << endl;
  *fout << ouput << endl;

  return;
}