#include "Recruitment.h"
#include "types.h"

Recruitment::Recruitment(string companyName, string job, string deadline, int numberOfHires, string businessNumber) {
  this->companyName = companyName;
  this->job = job;
  this->deadline = deadline;
  this->numberOfHires = numberOfHires;
  this->businessNumber = businessNumber;
}

RecruitmentInfo Recruitment::getInfo() {
  RecruitmentInfo output = {this->companyName, this->job, this->deadline, this->numberOfHires, this->businessNumber};
}