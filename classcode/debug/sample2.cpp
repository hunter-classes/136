#include <iostream>

int f_three(int x){
  int a = 1000;
  int b = 2000;
  b = b + x;
  return b;
}

int f_two(int x){
  int a = 100;
  int b = 200;
  b = b + x;
  b = f_three(b);
  return b;
}

int f_one(int x){
  int a = 10;
  int b = 20;
  b = b + x;
  b = f_two(b);
  return b;
}

  

int main(int argc, char *argv[])
{
  int b = 0;
  int a = 30;
  for (a=0;a<10;a++){
    b=b+a;
  }
  
  f_one(a);
  return 0;
}
