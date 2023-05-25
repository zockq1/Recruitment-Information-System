#include <string>
#include "types.h"
using namespace std;

class Recruitment
{
private:
  string companyName;
  string businessNumber;
  string job;
  int numberOfHires;
  string deadline;
  
  
public:
  Recruitment(string companyName, string businessNumber, string job, int numberOfHires, string deadline);
  RecruitmentInfo getInfo();
};
