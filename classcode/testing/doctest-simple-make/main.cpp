#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"
#include "fact.h"
int main(int argc, char *argv[])
{

  for (int i = 0; i < 6; ++i) {
    std::cout << "fact(" << i << ") = " << fact(i) << "\n";
  }

  return 0;
}
