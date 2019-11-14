#include <iostream>


int add1(int a){
  a = a + 1;
  a = a + 1;
  return a;
}

int sub2(int a){
  a = a - 1;
  a = a -1;
  return a;
};

int main(int argc, char *argv[])
	 {
	   int i;
	   int a = 20;
	   int list[] = {20,30,50,40,70};
	   
	   for (i = 0; i < 20; ++i) {
	     a = add1(a);
	     std::cout << a << "\n";
	   }

	   int b  = 10;
	   
	   for (i = 0; i < 20; ++i) {
	     a = sub2(a);
	     std::cout << a << "\n";
	   }

  

	   return 0;
	 }
