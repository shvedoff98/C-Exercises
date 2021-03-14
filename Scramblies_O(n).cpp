#include<string>
#include <array>

bool scramble(const std::string& s1, const std::string& s2){
  std::array<int, 26> s1LetterCounts{0};
  for (auto& i : s1) {
    ++s1LetterCounts[i - 'a'];
  }
  
  for (auto& i : s2) {
    --s1LetterCounts[i - 'a'];
  }
  
  for (auto& i : s1LetterCounts) {
    if (i < 0) {
      return false;
    }
  }
  
  return true;
}
