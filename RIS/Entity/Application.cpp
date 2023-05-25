#include "Application.h"
#include "types.h"

Application::Application(string companyName, string businessNumber, string job, int numberOfHires, string deadline) {
  this->companyName = companyName;
  this->job = job;
  this->deadline = deadline;
  this->numberOfHires = numberOfHires;
  this->businessNumber = businessNumber;
}

ApplicationInfo Application::getInfo() {
  ApplicationInfo info = ApplicationInfo{this->companyName, this->businessNumber, this->job, this->numberOfHires, this->deadline};
  return info;
}