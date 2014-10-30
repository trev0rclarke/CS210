#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main (int argc, char* argv[])
{
  // Default
  string name = "World";
  if (argv[1])
    name = argv[1];
  cout << "Hello, " << name;
  return 0;
}
