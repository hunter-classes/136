#include <iostream>
#include "funcs.h"

std::string line(std::string c,int len){
  std::string result="";
  for (int i = 0; i < len; ++i) {
    result = result + c;
  }
  return result;
}

std::string box(int width, int height){
  std::string result="";
  for (int row = 0; row < height; row++) {
    result = result + line("*",width);
    result = result + "\n";
  }
  return result;
}

std::string ltriangle(int side_len){
  std::string result="";
  for (int row = 0; row < side_len; row++) {
    result = result + line("*",row+1);
    result = result + "\n";
  }
  return result;
}

std::string utriangle(int side_len){
  std::string result="";
  for (int row = 0; row < side_len; row++) {
    result = result + line(" ",row);
    result = result + line("*",side_len-row);
    result = result + "\n";
  }
  return result;
}


std::string cross(int h){
  std::string result = "";
  int i;
  int s1 = 0;
  int s2 = h;
  // do the top part
  for (i = 0; i < h/2; ++i) {
    result = result + line(" ",s1);
    result = result + line("*",1);
    result = result + line(" ",s2);
    result = result + line("*",1);
    result = result + "\n";
    s1++;
    s2=s2-2;
  }
 //do the bottom part

  
  return result;

}
