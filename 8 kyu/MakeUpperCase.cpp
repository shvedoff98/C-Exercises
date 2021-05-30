#include <string>
#include <iostream>

std::string makeUpperCase (const std::string& input_str)
{
  std::string str;
  for (auto const& x : input_str)
  {
      (x-'0' > '0') ? str += char(x - 32) : str += x; 
  }
  return str;
}

int main(int argc, char* argv[])
{
    for (std::string str; std::getline(std::cin, str); )
    {
	std::cout << makeUpperCase(str) << "\n";
    }
}
