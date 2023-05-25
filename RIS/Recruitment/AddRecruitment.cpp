#include "AddRecruitment.h"
#include "AddRecruitmentUI.h"
#include "CompanyUser.h"
#include "CurrentUser.h"

extern CurrentUser* currentUser;

void AddRecruitment::addNewRecruitment(string newJob, int newNumberOfHires, string newDeadline)
{
  CompanyUser *me = (CompanyUser*)(currentUser->getCurrentUser());
  me->addNewRecruitment(newJob, newNumberOfHires, newDeadline);
}