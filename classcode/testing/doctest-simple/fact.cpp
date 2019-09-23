#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"


int fact(int n){
  return 1;
}


TEST_CASE("Testing Factorial Base Cases"){
  CHECK(fact(0)==1);
  CHECK(fact(1)==1);
}

TEST_CASE("Testing Factorial General Case"){
  CHECK(fact(5)==120);
}
