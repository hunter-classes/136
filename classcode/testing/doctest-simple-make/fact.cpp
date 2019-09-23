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


TEST_CASE("Testing Factorial Base Cases"){
  CHECK(fact(0)==1);
  CHECK(fact(1)==1);
}

TEST_CASE("Testing Factorial General Case"){
  CHECK(fact(5)==120);
}
