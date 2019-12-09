#include <iostream>

#include "Three.h"

int main()
{
  Three<int> t(1,2,3);
  t.printem();

  Three<std::string> t2("first","second","third");
  t2.printem();


  return 0;
}
