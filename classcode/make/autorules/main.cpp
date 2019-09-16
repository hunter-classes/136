#include <iostream>

#include "addfuncs.h"
#include "morefuncs.h"

int main()
{
  int x;
  std::cout << "Hello from main\n";
  x = sum(3,5);
  std::cout << x << "\n";

  x = sum3(5,10,15);
  std::cout << x << "\n";

  x = addfour(5,10,15,20);
  std::cout << x << "\n";

  return 0;
}

