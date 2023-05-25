#include "AddRecruitment.h"
#include "AddRecruitmentUI.h"
#include "../Entity/CompanyUser.h"
#include "../Entity/CurrentUser.h"
#include <iostream>


void AddRecruitment::addNewRecruitment(CurrentUser *currentUser, string newJob, int newNumberOfHires, string newDeadline)
{
  User *me = currentUser->getCurrentUser();
  me->addNewRecruitment(newJob, newNumberOfHires, newDeadline);
  return;
}