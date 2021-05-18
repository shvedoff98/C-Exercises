#include <string>
#include <iostream>
#include <algorithm>

bool is_item(char& s) { return s == '!'; }

std::string removeExclamationMarks(std::string str)
{
  std::string::iterator it = std::remove_if(str.begin(), str.end(), is_item);
  std::cout << *it << "\n";
  str.erase(it, str.end());
  return str;
}


int main(int argc, char* argv[])
{
    std::string str {"Hello World!"};
    std::cout << removeExclamationMarks(str) << "\n";
}
