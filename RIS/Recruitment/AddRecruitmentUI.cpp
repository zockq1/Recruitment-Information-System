#include <fstream>
#include "AddRecruitment.h"
#include "AddRecruitmentUI.h"

AddRecruitmentUI::AddRecruitmentUI(AddRecruitment *control)
{
  this->control = control;
}

void AddRecruitmentUI::addNewRecruitment(ifstream *fin, ofstream *fout)
{
  string newJob;
  int newNumberOfHires;
  string newDeadline;
  *fin >> newJob >> newNumberOfHires >> newDeadline;
  this->control->addNewRecruitment(newJob, newNumberOfHires, newDeadline);

  *fout << "3.1. 채용 정보 등록" << "\n";
  *fout << "> [" << newJob << "] [" << newNumberOfHires << "] [" << newDeadline << "]" << endl << endl;

  return;
}