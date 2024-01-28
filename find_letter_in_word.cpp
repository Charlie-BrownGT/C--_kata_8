#include <string>

unsigned int strCount(const std::string& word, char letter){
  
  size_t length = word.length();
  int result = 0;
  
  for(int i = 0; i < length; i++){
    if(word[i] == letter){
      result++;
    }
  }
  return result;
}