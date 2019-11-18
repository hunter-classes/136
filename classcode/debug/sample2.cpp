#include <iostream>

int f_three(int x){
  int a = 1000;
  int b = 2000;
  b = b + x;
  f_two(b);
}

int f_two(int x){
  int a = 100;
  int b = 200;
  b = b + x;
  f_two(b);
}

int f_one(int x){
  int a = 10;
  int b = 20;
  b = b + x;
  f_two(b);
}

  

int main(int argc, char *argv[])
{
  int a = 30;
  f_one(a);
  return 0;
}
