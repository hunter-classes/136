#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("Testing Factoria"){
  CHECK(fact(0)==1);
  CHECK(fact(1)==1);
  CHECK(fact(5)==120);
}


TEST_CASE("More tests"){
  INFO("STRING TESTS");
  std::string s = "hello";
  CHECK("hello" == "Hi");
  CHECK("hello" == "hello");
  CHECK(s.compare("hello")==0);
  CHECK(s.compare("HI")==0);
}

TEST_CASE("Sometimes we won't actually have tests"){
  int i;
  for (i = 0; i < 10; ++i) {
    std::cout <<i << " ";
  }
  std::cout << "\n";
  
}
