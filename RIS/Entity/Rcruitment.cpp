#include "Recruitment.h"
#include "types.h"

Recruitment::Recruitment(string companyName, string businessNumber, string job, int numberOfHires, string deadline) {
  this->companyName = companyName;
  this->job = job;
  this->deadline = deadline;
  this->numberOfHires = numberOfHires;
  this->businessNumber = businessNumber;
}

RecruitmentInfo Recruitment::getInfo() {
  RecruitmentInfo info = {this->companyName, this->job, this->deadline, this->numberOfHires, this->businessNumber};
  return info;
}