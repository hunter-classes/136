#include <iostream>
#include "addfuncs.h"

int main()
{
  int x;

  x = sum(3,5);
  std::cout << x << "\n";

  x = sum3(5,10,15);
  std::cout << x << "\n";
  return 0;
}

