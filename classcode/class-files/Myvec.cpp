#include <iostream>
#include <math.h>

#include "Myvec.h"

Myvec::Myvec(int xval, int yval){
  x = xval;
  y = yval;
}

Myvec::Myvec(){
  x=0;
  y=0;
}

std::string Myvec::getString(){
  std::string result="";
  result = result + "<"+std::to_string(x)+","+std::to_string(y)+">";
  return result;
}
double Myvec::magnitude(){
  return sqrt(x*x+y*y);
}
