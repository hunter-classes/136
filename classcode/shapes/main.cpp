#include <iostream>
#include "funcs.h"

int main()
{
  std::string result;

  result = box(5,3);
  std::cout << result << "\n\n";
  result = box(3,5);
  std::cout << result << "\n\n";

  result = ltriangle(6);
  std::cout << result << "\n\n";
  
  return 0;
}
