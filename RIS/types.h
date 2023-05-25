#pragma once
#include <string>
using namespace std;

struct RecruitmentInfo {
  string companyName;
  string job;
  string deadline;
  int numberOfHires;
  string businessNumber;
};

struct ApplicationInfo {
  string companyName;
  string job;
  string deadline;
  int numberOfHires;
};


enum UserType {
  COMPANY_USER,
  NORMAL_USER
};
