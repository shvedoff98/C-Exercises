#include <string>
#include <cctype>

bool cool_string(const std::string& s) 
{
  for (size_t i = 0;i < s.size(); ++i)
  {
    char prev;
    if (!isalpha(s[i])) return false;
    if ((isupper(prev) && isupper(s[i])) || (islower(prev) && islower(s[i]))) return false;
    prev = s[i];
  }
  return true;
}
