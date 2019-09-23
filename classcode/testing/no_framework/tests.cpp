#include <iostream>
#include "piglatin.h"

int main(int argc, char *argv[])
{
  
  std::cout << piglatinify("hello") << "\n";
  std::cout << piglatinify("able") << "\n";
  std::cout << piglatinify("Hello") << "\n";
  return 0;

}
