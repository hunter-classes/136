#include <iostream>

//int add2(int a, int b);
//int add2(int x, int y);
int add2(int, int);

int main()
{
  int r;
  r = add2(5,2);
  std::cout << r << "\n";
  return 0;
}


int add2(int a, int b){
  return a+b;
}


