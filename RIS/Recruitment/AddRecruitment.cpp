#include "AddRecruitment.h"
#include "AddRecruitmentUI.h"
#include "../Entity/CompanyUser.h"
#include "../Entity/CurrentUser.h"


void AddRecruitment::addNewRecruitment(string newJob, int newNumberOfHires, string newDeadline)
{
  CompanyUser *me = currentUser.getCurrentUser();
  me->addNewRecruitment(string newJob, int newNumberOfHires, string newDeadline)
}