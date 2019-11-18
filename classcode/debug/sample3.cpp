#include <iostream>
#include <cstdlib>
#include <ctime>

void f(int a){
  a = a - 2;
  if (a==0)
    return;
  else
    f(a);
}

void random_crasher(int i){
  std::cout << i << "\n";
  int x = rand()%100;
  if (x < 10)
    abort();
  else
    random_crasher(i+1);

}


int main(int argc, char *argv[])
{
  srand(time(0));
  random_crasher(0);
  return 0;
}
