#include <iostream>

std::string box(int width, int height){
  std::string result="";
  for (int row = 0; row < height; row++) {
    for (int col = 0; col < width; col++) {
      result = result + "*";
    }
    result = result + "\n";

  }
  return result;
}

int main()
{
  std::string result;

  result = box(5,3);
  std::cout << result << "\n\n";
  result = box(3,5);
  std::cout << result << "\n\n";
  return 0;
}
