#pragma once
#include <iostream>

class Myvec {
 private:
  int x;
  int y;
 public:
  Myvec(int xval, int yval);
  Myvec();

  std::string getString();
  double magnitude();
};
