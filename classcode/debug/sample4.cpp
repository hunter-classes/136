#include <iostream>
#include <unistd.h>


int main(int argc, char *argv[])
{
  int i = 0;

  while (i < 1000){
    std::cout << i << "\n";
    sleep(1);
    i++;

  }
  return 0;
}
