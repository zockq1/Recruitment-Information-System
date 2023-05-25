#include <string>
#include "types.h"
using namespace std;


class Application
{
private:
  string companyName;
  string job;
  string deadline;
  int numberOfHires;
public:
  Application();
  ApplicationInfo getInfo();
};

