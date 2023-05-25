#include "RecruitmentCollection.h"

list<Recruitment*> RecruitmentCollection::getOwnedRecruitment(){
  return this->ownedRecruitment;
}

void RecruitmentCollection::addRecruitment(string companyName, string businessNumber, string job, int numberOfHires, string deadline){
  Recruitment *newRecruitment = new Recruitment(companyName, businessNumber, job, numberOfHires, deadline);
  this->ownedRecruitment.push_back(newRecruitment);
}