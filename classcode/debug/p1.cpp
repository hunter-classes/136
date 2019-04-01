#include <iostream>

int main()
{
  int i;
  int sum=0;
  for(i=0;i<1000;i++){

    sum = sum + i;
    if (i==20){
      abort();
    }

  }

  std::cout << sum << "\n";
  return 0;
}
