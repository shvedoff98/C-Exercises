#include <string>
#include <vector>
#include <algorithm>

typedef std::vector<std::vector<std::string>> matrix_t;

std::string well(const std::vector<std::vector<std::string>>& arr) 
{
  int i {0};
  matrix_t mat = arr;
  
  for (auto it = mat.begin(); it != mat.end(); ++it)
  {
    for (auto jt = it->begin(); jt != it -> end(); ++jt)
    {
      std::transform(begin(*jt), end(*jt), begin(*jt), ::tolower);
      if (*jt == "good") ++i;
    }
  }
  
  if (i > 2) return "I smell a series!";
  else if (i >= 1 && i < 3) return "Publish!";
  else if (i == 0) return "Fail!";
}
