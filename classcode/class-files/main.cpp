#include <iostream>

#include "Myvec.h"

int main()
{
  Myvec v1(5,2);

  std::cout << v1.getString() << " " << v1.magnitude() << "\n";
  return 0;
}
