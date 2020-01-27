#include <iostream>

#include "funcs.h"


int main()
{
  int c;

  c = inc(5);
  std::cout << "one more than 5 is " << c << "\n";


  c = add2(5,15);
  std::cout << "5 + 15  is " << add2(5,15) << "\n";


  return 0;
}
