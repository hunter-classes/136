#include <iostream>

int sum(int a, int b){
  return a+b;
}

struct original_vector{
  int x;
  int y;
  std::string name;
};


class Vector {
public:
  int x;
  int y;
  std::string name;
};

int main(int argc, char *argv[])
{
  int i;
  Vector v, *pv1, *pv2;

  v.x = 10;
  pv1 = new Vector();
  pv1->x = 30;

  pv2 = &v;

  
  return 0;
}
