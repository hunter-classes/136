#include <iostream>
#include <string>
#include <math.h>

double freqs[] = {8.167,1.49,2.782,4.253,12.702,2.228,2.015,6.094,6.966,0.153,0.772,4.025,2.406,6.749,7.507,1.929,0.095,5.987,6.327,9.056,2.758,0.978,2.360,0.150,1.974,0.07};


std::string encode(std::string s, int r){
  char c;
  std::string result="";
  /*  I forgot to set i to 0 in the loop so it just kept it's value from before!!!! */
  for (int i = 0  ; i < s.length(); ++i) {
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

double distance(double a[], double b[], int len){
  double sum = 0;
  for (int i = 0; i < len; ++i) {
    sum = sum + (b[i] - a[i]) * (b[i] - a[i]);
  }
  return sqrt(sum);
}

int count_letters(std::string s, char c){
  int count = 0;
  for (int i = 0; i < s.length(); ++i) {
    if (s[i]==c)
      count++;
  }
  return count;
}
std::string decode(std::string s, double freqs[]){
  std::string test_string;
  int total_letters;
  double test_vector[26];
  double min_dist = 1000;
  double min_index = 0;
  int i,j;
  double d;
  
  // count the letters in our source string
  total_letters = s.length();
  for (i = 0; i < s.length(); ++i) {
    // we really want to subtract out all non letter characters
    if (s[i]==' ')
      total_letters--;
  }

  test_vecot[l] = .3
    for (i = 0; i < 26; ++i) {
      //    encode the new test string
      test_string = encode(s,i);
      //    figure out the frequencies for the new test string
      for (j = 0; j < 26; j++) {
	d  = 1.0*count_letters(test_string,'a'+j) / total_letters;
	test_vector[j] = d;
      }

      //    calc its distance from the real freq vector
      //    if it's the closest so far, save it
    
    }


  
}

int main()
{
  int i;
  std::string s = "gzzgiq kgin jge cozn gt ktznayogys atqtuct zu sgtqotj";
  // stupid_decoder(s);
  return 0;
}
