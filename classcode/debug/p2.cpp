#include <iostream>

int f3(int a, int b){

  int result = 2*a+2*b;
  return result;

}

int f2(int b){

  int result = b*2;
  result = f3(result,b);

  return result;

}

int f1(int a){
  int result;

  result = f2(a)+f3(a,a)+f2(a);
  
  return result;
}

int main()
{
  int a=10;
  int b;
  b = f1(a);
  std::cout << b << "\n";
  return 0;
}
