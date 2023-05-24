#include <fstream>
#include "RecruitmentInformation.h"
#include "RecruitmentInformationUI.h"

RecruitmentInformationUI::RecruitmentInformationUI(RecruitmentInformation *control)
{
  this->control = control;
}

void RecruitmentInformationUI::showRecruitmentList(ofstream *fout)
{
  list<string> ouputList = this->control->showRecruitmentList();

  *fout << "3.2. 등록된 채용 정보 조회" << endl;

  list<string>::iterator iter = ouputList.begin(); 
  for(iter=ouputList.begin(); iter!=ouputList.end(); iter++) 
  { 
    *fout << "> " << *iter << endl;
  } 
  *fout << endl;

  return;
}