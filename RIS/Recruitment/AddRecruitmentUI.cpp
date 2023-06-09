#include <fstream>
#include "AddRecruitment.h"
#include "AddRecruitmentUI.h"

AddRecruitmentUI::AddRecruitmentUI(AddRecruitment *control)
{
  this->control = control;
}

void AddRecruitmentUI::addNewRecruitment(CurrentUser *currentUser, ifstream *fin, ofstream *fout)
{
  string newJob;
  int newNumberOfHires;
  string newDeadline;
  *fin >> newJob >> newNumberOfHires >> newDeadline;
  this->control->addNewRecruitment(currentUser, newJob, newNumberOfHires, newDeadline);
  *fout << "3.1. Recruitment Posting" << endl;
  *fout << "> " << newJob << " " << newNumberOfHires << " " << newDeadline << endl << endl;
  return;
}