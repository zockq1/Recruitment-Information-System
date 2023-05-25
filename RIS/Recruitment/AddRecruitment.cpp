#include "AddRecruitment.h"
#include "AddRecruitmentUI.h"
#include "../Entity/CompanyUser.h"
#include "../Entity/CurrentUser.h"


void AddRecruitment::addNewRecruitment(CurrentUser *currentUser, string newJob, int newNumberOfHires, string newDeadline)
{
  CompanyUser *me = dynamic_cast<CompanyUser*>(currentUser->getCurrentUser());

  me->addNewRecruitment(newJob, newNumberOfHires, newDeadline);
  return;
}