#include <string>
#include "types.h"
using namespace std;


class Application
{
private:
  string companyName;
  string businessNumber;
  string job;
  int numberOfHires;
  string deadline;
public:
  Application(string companyName, string businessNumber, string job, int numberOfHires, string deadline);
  ApplicationInfo getInfo();
};

