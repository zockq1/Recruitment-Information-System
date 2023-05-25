#include "Recruitment.h"
#include "../types.h"

Recruitment::Recruitment(string companyName, string businessNumber, string job, int numberOfHires, string deadline) {
  this->companyName = companyName;
  this->job = job;
  this->deadline = deadline;
  this->numberOfHires = numberOfHires;
  this->businessNumber = businessNumber;
}

RecruitmentInfo Recruitment::getInfo() {
  RecruitmentInfo info = RecruitmentInfo{this->companyName, this->businessNumber, this->job, this->numberOfHires, this->deadline};
  return info;
}