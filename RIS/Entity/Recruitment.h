#include <string>
#include "types.h"
using namespace std;

class Recruitment
{
private:
  string companyName;
  string job;
  string deadline;
  int numberOfHires;
  string businessNumber;
public:
  Recruitment(/* args */);
  RecruitmentInfo getInfo();
};
