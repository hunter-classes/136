#include <iostream>
#include <string>
#include <cstdlib> // for rand()
#include <ctime> // for  time(0) to seed random number
// cout << rand()%100;

//srand(time(0));

using namespace std;

void f(int a[]) {
  cout << a[2];
}


int main(){

  string s;
  int i,j;
  int a[5];
  int b[5];

  int c[5];

  for (i=0;i<5;i++){
    a[i] = 20;
    b[i] = 10;
    
  }
  std::cout << "Printing out -10 to 15\n";
  for (i=-10;i<15;i++){
    cout << a[i] << "\t" << b[i] << endl;
  }

  cout << endl << endl;
  

  a[7]=5432100;
  a[8]=54321;
  b[-3]=191919;
  for (i=0;i<5;i++){
    cout << a[i] << "\t" << b[i] << endl;
  }

  cout << endl << endl;

  f(a);
}


