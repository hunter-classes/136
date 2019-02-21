#pragma once

int fact(int);

TEST_CASE("Testing Factoria"){
  CHECK(fact(0)==1);
  CHECK(fact(1)==1);
  CHECK(fact(5)==120);
}
