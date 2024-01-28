#include <string>

std::string integrate(const int& coefficient,const int& exponent){

  int new_exponent = exponent + 1; 
  int new_coefficient = coefficient / new_exponent;
  
  std::string string_exponent = std::to_string(new_exponent);
  std::string string_coefficient = std::to_string(new_coefficient);
  
  std::string placeholder = "x^";
  
  std::string result = string_coefficient + placeholder + string_exponent;
  
  return result;
}