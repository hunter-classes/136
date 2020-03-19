#include <iostream>
#include <string>
#include <math.h>

std::string encode(std::string s, int r){
  char c;
  std::string result="";
  for (int i ; i < s.length(); ++i) {
    c = s[i];
    if (c >= 'a' && c<='z'){
      c  = c - 'a';
      c = (c + r)%26;
      c = c + 'a';
    }
    else if (c >= 'A' && c<='Z'){
      c  = c - 'A';
      c = (c + r)%26;
      c = c + 'A';
    }
    result = result + c;
  }
  return result;
}


int main()
{
  std::string s = "hello world";
  std::string result = encode(s,3);
  std::cout << s << " : " << result << "\n";
  
  return 0;
}
