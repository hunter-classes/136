#include <iostream>
#include <string>
#include <math.h>
using std::string;
using std::cout;
using std::endl;

double raw_frequencies[] = {8.167,1.492,2.782,4.253,12.702,2.228,2.015,6.094,6.966,0.153,0.772,4.025,2.406,6.749,7.507,1.929,0.095,5.987,6.327,9.056,2.758,0.978,2.360,0.150,1.974,0.07};

double frequencies[26];

string words="the frequency of letters in text has been studied for use in cryptanalysis, and frequency analysis in particular, dating back to the iraqi mathematician al-kindi (c. 801–873 ad), who formally developed the method (the ciphers breakable by this technique go back at least to the caesar cipher invented by julius caesar, so this method could have been explored in classical times). letter frequency analysis gained additional importance in europe with the development of movable type in 1450 ad, where one must estimate the amount of type required for each letterform, as evidenced by the variations in letter compartment size in typographer's type cases.  linguists use letter frequency analysis as a rudimentary technique for language identification, where it's particularly effective as an indication of whether an unknown writing system is alphabetic, syllablic, or ideographic. for example, the japanese hiragana syllabary contains 46 distinct characters, which is more than most phonetic alphabets; by contrast, the english and hawaiian alphabets have only 26 and 13 letters, respectively.no exact letter frequency distribution underlies a given language, since all writers write slightly differently. however, most languages have a characteristic distribution which is strongly apparent in longer texts. even language changes as extreme as from old english to modern english (regarded as mutually unintelligible) show strong trends in related letter frequencies: over a small sample of biblical passages, from most frequent to least frequent, enaid sorhm tgþlwu (æ)cfy ðbpxz of old english compares to eotha sinrd luymw fgcbp kvjqxz of modern english, with the most extreme differences concerning letterforms not shared.[1]								linotype machines for the english language assumed the letter order, from most to least common, to be etaoin shrdlu cmfwyp vbgkjq xz based on the experience and custom of manual compositors. the equivalent for the french language was elaoin sdrétu cmfhyp vbgwqj xz.arranging the alphabet in morse into groups of letters that require equal amounts of time to transmit, and then sorting these groups in increasing order, yields e it san hurdm wgvlfbk opxcz jyq.[a] letter frequency was used by other telegraph systems, such as the murray code. ";


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


double distance(double a[], double b[], int len){
  double sum = 0;
  for (int i = 0; i < len; ++i){
    sum = sum + (b[i]-a[i]) * (b[i]-a[i]);
    }
  return sqrt(sum);

}

int count_letters(string s, char c){
  int count = 0;
  for (int i = 0; i < s.length(); i++){
    if (s[i]==c)
      count++;
	}
  return count;
}

int calc_total_letters(string s){
  int total_letters = s.length();
  int j = total_letters;
  int i;
  for (i = 0; i < j; i++){
    if (s[i] == ' ')
      total_letters--;
  }
  return total_letters;
}

void build_vector(string s, double result[]){
  int j;
  double d;
  int total_letters = calc_total_letters(s);
  
  for (j = 0 ; j < 26; j++){
      d = 1.0*count_letters(s,'a'+j) / total_letters;
      result[j] = d;
  }
 
}

string decode(string s, double freqs[]){
			string test_string;
  int total_letters;
  double test_vector[26];
  int i;
  double d;
  double min_dist = 1000;
  int min_index = 0;
  
  total_letters = calc_total_letters(s);
  int j = total_letters;
  for (i = 0; i < j; i++){
    if (s[i] == ' ')
      total_letters--;
  }
  
  for  ( i=0; i < 26; i++){

    // encode a test string
    test_string = encode(s,i);
    
    // build a vector of frequencies for the test string
    build_vector(test_string,freqs);
    for (i = 0; i < 26; i++){
      cout << freqs[i] << endl;
	}

    // find the distance between test vector and freq vector
    double test_distance = distance(freqs,test_vector,26);

    // update minimum if needed
    if (test_distance < min_dist){
      min_dist = test_distance;
      min_index = i;
    }

  }
  cout << min_index << "\n";
    string decoded = encode(s,min_index);
  return decoded;
}

int main(int argc, char *argv[])
{
  string source = "When shall we three meet again";
  string encoded = encode(source,12);
    string decoded;

double d;
 int j;
    int total_letters;
    total_letters = words.length();
    j = total_letters;
    for (int i = 0; i < j; i++){
    if (words[i] <'a' || words[i] > 'z')
      total_letters--;
  }

  for (j = 0 ; j < 26; j++){
      d = 1.0*count_letters(words,'a'+j) / total_letters;
      frequencies[j] = d;
  }



    for (int i = 0; i < 26; i++){
  frequencies[i] = raw_frequencies[i]/100;
}


  
    cout << "\n";

  cout << source << "\n";
  cout << encoded << "\n";
  cout << "\n\n";

  decoded = decode(encoded,frequencies);
  cout << decoded << "\n";
  return 0;
}

