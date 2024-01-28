#include <vector>

std::vector<int> humanYearsCatYearsDogYears(int humanYears) {
  //your code here
  int catYears = 15 + (humanYears>=2 ? 9 : 0) + (humanYears>=3 ? (humanYears-2)*4 : 0);
  int dogYears = (humanYears>=3 ? catYears+(humanYears-2) : catYears);
  return std::vector<int>{humanYears, catYears, dogYears};
}