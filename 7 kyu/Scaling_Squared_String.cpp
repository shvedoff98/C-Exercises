#include <iostream>
#include <cstring>
#include <iterator>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

class ScalingSqStrings
{
public:
    static std::string scale(const std::string &strng, int k, int n)
    {
      std::istringstream ist {strng};
      std::string temp, new_str;
      while (getline(ist, temp))
      {
        for (int i=0; i<n; ++i) 
        {
          for (auto& x : temp)
          {
            new_str += std::string(k, x);
          }
          new_str += '\n';
        }
      }
      std::string s = new_str.substr(0, new_str.size()-1);
      return s;
    }
};


int main(int argc, char* argv[])
{
    ScalingSqStrings obj;
    std::string str {"abcd\nefgh\nijkl\nmnop"};
    std::cout << obj.scale(str, 2 ,3) << "\n";
}
