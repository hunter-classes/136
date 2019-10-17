#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

string encode(string s, int r){

  char c;
  string result = "";
  
  for (unsigned i = 0; i < s.length(); ++i) {
    c = s[i];
    if (c >= 'a' && c <= 'z'){
      c = c - 'a';
      c = (c+r)%26;
      c = c + 'a';
    }
    else if (c >= 'A' && c <= 'Z'){
      c = c - 'A';
      c = (c+r)%26;
      c = c + 'A';
    }

    result = result + c;
  }

  return result;
  
}


int main(int argc, char *argv[])
{
  string source = "Attack each day with an enthusiasm unknown to mankind!";
  string encoded = encode(source,3);
  string decoded;
  cout << source << "\n------------\n\n";
  cout << encoded << "\n";

  cout << "\n";

  for (int i = 0; i < 26; ++i) {
    decoded = encode(encoded,i);
    cout << i << " : " << decoded << "\n";
  }

  return 0;
}

