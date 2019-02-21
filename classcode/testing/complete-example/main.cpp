#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"

#include "funcs.h"

int main()
{
  int i;
  
  std::cout << "Hello\n";

  i = fact(3);

  std::cout << "3 factorial is " << i << "\n";
  return 0;
}
