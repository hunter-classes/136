#include <iostream>
#include <string>
#include <math.h>

std::string encode(std::string s, int r){
  char c;
  std::string result="";
  /*  I forgot to set i to 0 in the loop so it just kept it's value from before!!!! */
  for (int i=0 ; i < s.length(); ++i) {
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

void stupid_decoder(std::string s){
  int i;
  std::string decoded;
  for (i = 0; i < 26; ++i) {
    decoded = encode(s,i);
    std::cout << i << " : " <<  encode(s,i) << "\n";
  }
}

int main()
{
  int i;
  std::string s = "gzzgiq kgin jge cozn gt ktznayogys atqtuct zu sgtqotj";
  stupid_decoder(s);

  return 0;
}
