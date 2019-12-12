#include <iostream>

#include "Triangle.h"
#include "BigTriangle.h"
int main()
{

  Triangle t1 = Triangle(10,20);
  BigTriangle t2(10,20);
  std::cout << t1.get_area() << "\n";
  std::cout << t2.get_area() << "\n";
  return 0;
}
