#include "Recruitment.h"
#include <list>
using namespace std;

class RecruitmentCollection
{
private:
  list<Recruitment*> ownedRecruitment;
public:
  RecruitmentCollection();
  list<Recruitment*> getOwnedRecruitment();
  void addRecruitment(string companyName, string job, int numberOgHires, string deadline, string businessNumber);
};

