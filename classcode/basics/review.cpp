#include <iostream>

int add2(int a, int b){
  int result = a+b;
  return result;
}
std::string add2(std::string a, std::string b){
  return a+b;
}

int main()
{
  int a,i;
  double b;
  std::string s = "hello ";

  a = 20/7;
  b = 20.0/7.0;
  
  std::cout << s << a << " " << b << std::endl;
  for (i = 0; i < 10; ++i){
    std::cout << add2(i,20) << " ";
  }

  if (i>20){
    // do something
  } else if (i > 10){
    // do something else
  } else {
    // do yet another thing
  }
  // && instead of logical and
  // || instead of logical or
  // ! instead of logical not

  std::cout << "\n";
  std::cout << i << "\n";
  std::cout << add2(s," another string") << "\n";
  return 0;



}

