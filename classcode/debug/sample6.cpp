#include <iostream>

int f(){
  int *p;
  p = new int;
  *p = 20;
  return *p;

}


int main()
{
  int i;
  i = f();
  return 0;
}
