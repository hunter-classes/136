#include <iostream>
#include "string"
#include "piglatin.h"


std::string piglatinify(std::string word){
  std::string first = word.substr(0,1);
  std::string result;
    
  if (first=="a" || first=="e"){
    result = word+"ay";
  } else {
    result = word.substr(1,word.length())+word[0]+"ay";
  }
  return result;
  
}
