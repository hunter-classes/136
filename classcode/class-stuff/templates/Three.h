#pragma once
#include <iostream>

template <class T>
class Three{
public:
  Three (T a, T b, T c);
  void printem();
private:
  T data[3];
};

/* Note - this is the one time that we include
   code into an H file and then into another cpp file
*/
#include "Three.hxx"
