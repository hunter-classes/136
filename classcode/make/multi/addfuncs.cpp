#include "addfuncs.h"

// some modification

int sum(int a, int b){
  return a + b;
}

int sum3(int a, int b, int c){
  return a+sum(b,c);
}
