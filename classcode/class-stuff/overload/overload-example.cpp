#include <iostream>

template <class T>
class Three{
public:
  Three (T a, T b, T c){
    data[0] = a;
    data[1] = b;
    data[2] = c;
  }

  void printem(){
    for (int i = 0; i < 3; ++i) {
      std::cout << data[i] << " ";
    }
    std::cout << "\n";
  };

  T get(int i){
    return data[i];

  };

  T &operator[] (int i){
    return data[i];
  }

  

private:
  T data[3];
};


int main()
{
  Three<int> t(1,2,3);
  t.printem();

  Three<std::string> t2("first","second","third");
  t2.printem();


  std::cout << t.get(1) << "\n";
  std::cout << t2.get(1) << "\n";
  std::cout << "\n";
  std::cout << t[1] << "\n";
  std::cout << t2[1] << "\n";

  t[1]=1000;
  t2[2]="This is a new string";

  t.printem();
  t2.printem();


  return 0;
}
