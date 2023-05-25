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

  *fout << "3.2. 등록된 채용 정보 조회" << endl;

  *fout << ouput << endl;

  return;
}