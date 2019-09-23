#include <iostream>

#include "piglatin.h"


int main(int argc, char *argv[])
{
  std::cout << "MAIN\n\n";
  std::cout << piglatinify("HELLO");
  
  return 0;
}
