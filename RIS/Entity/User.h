#include <string>
#include "types.h"
using namespace std;

class User
{
private:
  string id;
  string password;
  UserType userType;
public:
  void findUserbyCredential();
  string getId();
  UserType getUserType();
  virtual void addNewEntity() = 0;
  virtual void getNumber() = 0;
  virtual void getOwnedCollection() = 0;
};
