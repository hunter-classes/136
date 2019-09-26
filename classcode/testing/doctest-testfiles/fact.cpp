#include <iostream>
#include "doctest.h"
#include "fact.h"

int fact(int n){
  int p = 1;
  for (int i = 1; i <= n; ++i) {
    p = p * i;
  }

  return p;
}

