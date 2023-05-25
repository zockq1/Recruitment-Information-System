#pragma once
#include <string>
using namespace std;

typedef struct RecruitmentInfo {
  string companyName;
  string job;
  string deadline;
  int numberOfHires;
  string businessNumber;
} RecruitmentInfo;

typedef struct ApplicationInfo {
  string companyName;
  string job;
  string deadline;
  int numberOfHires;
} ApplicationInfo;


enum UserType {
  COMPANY_USER,
  NORMAL_USER
};
