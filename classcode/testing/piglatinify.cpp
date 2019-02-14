#include <iostream>

#include "piglatinify.h"
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

std::string piglatinify(std::string word){
  std::string result="";

  return result;

}


TEST_CASE("Testin piglatinify for edge cases"){
  CHECK(piglatinify("")=="");
  
  
  
}

TEST_CASE("Testing piglatinify for functionality"){
  CHECK(piglatinify("hello")=="ellohay");
  CHECK(piglatinify("able")=="ableay");

}
