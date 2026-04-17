#include <iostream>
using std::cout;
#include "person.h"

Person::Person(std::string first, std::string last, int arbitrary)
  : firstname(first), lastname(last), arbitrarynumber(arbitrary)
{
  cout << "Constructing " << firstname << " " << lastname << "\n";
}
