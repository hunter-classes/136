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

private:
  T data[3];
};
  

int main()
{
  Three<int> t(1,2,3);
  t.printem();

  Three<std::string> t2("first","second","third");
  t2.printem();


  return 0;
}
