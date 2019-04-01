#include <iostream>



int fact2(int n){
  if (n<2){
    return 1;
  } else{
    return n*fact2(n-1);
  }
}


int fact(int n){
  if (n==5){
    return 120;
  } else{
    return n*fact(n-1);
  }
}


int main()
{
  int n;

  n = fact(5);
  std::cout << n << "\n";
  n = fact(20);
  std::cout << n << "\n";
  n = fact(3);
  std::cout << n << "\n";
  return 0;
}
