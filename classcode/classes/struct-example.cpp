#include <iostream>

struct vector{
  int x;
  int y;
  std::string name;
};

int *make_array(){
  return new int[10];
}
int main(int argc, char *argv[])
{
  int i;
  int *a;

  a=make_array();

  for (i = 0; i < 10; ++i) {
    std::cout << a[i] << ", ";
    std::cout << (a+i) << "\n";
    
  }
  delete a;
  a = new int[5];
  delete a;

  struct vector s1;
  s1.x = 50;
  s1.x = 30;
  s1.name="hello";

  struct vector s2;
  s2 = s1;
  
  std::cout << s1.name << " " << s2.name << "\n";
  

  s1.name = "New Name";


  std::cout << s1.name << " " << s2.name << "\n";

  struct vector *vp;


  vp = &s1;

  std::cout << &s1 << " " << vp << "\n";

  std::cout << (*vp).name << "\n";
  vp->name = "Old name"; // vp->name same as (*vp).name
  std::cout << vp->name << "\n";
  std::cout << (*vp).name << "\n";

  struct vector s3 = {2,20,"Theo"};
  std::cout << s3.name << "\n";
  std::string s= "myname";
  struct vector s4 = {x:10,y:100,name:s};
  std::cout << s4.name << "\n";

  struct vector *vp2 = new struct vector({2,3,"hello"});
  std::cout << vp2->name << "\n";
  struct vector *vp3 = new struct vector;
  vp3->name = "horatio";
  
  std::cout << vp3->name << "\n";

  delete vp;
  delete vp2;
  delete vp3;
  return 0;
}
