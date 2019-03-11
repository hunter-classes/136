#include <iostream>
#include "funcs.h"

std::string box(int width, int height){
  std::string result="";
  for (int row = 0; row < height; row++) {
    for (int col = 0; col < width; col++) {
      result = result + "*";
    }
    result = result + "\n";

  }
  return result;
}

std::string ltriangle(int side_len){
  std::string result="";
  for (int row = 0; row < side_len; row++) {
    for (int col = 0; col < row+1; col++) {
      result = result + "*";
    }
    result = result + "\n";
  }
  return result;
}

