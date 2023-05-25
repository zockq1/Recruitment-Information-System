#pragma once
#include <string>
using namespace std;

typedef struct RecruitmentInfo {
  string companyName;
  string businessNumber;
  string job;
  int numberOfHires;
  string deadline;
} RecruitmentInfo;

typedef struct ApplicationInfo {
  string companyName;
  string businessNumber;
  string job;
  int numberOfHires;
  string deadline;
} ApplicationInfo;


enum class UserType {
  COMPANY_USER,
  NORMAL_USER,
};
