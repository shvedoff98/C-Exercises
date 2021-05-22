#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
#include <iostream>
#include <iterator>


int find_short(std::string str)
{
    size_t size = str.size();
    std::istringstream ist (str);
    std::vector<std::string> vec (std::istream_iterator<std::string>{ist},
                                  std::istream_iterator<std::string>());
    std::for_each(vec.begin(), vec.end(), [&] (std::string s) {
                 if (s.size() < size) size = s.size(); });
    return size;

}

int main(int argc, char* argv[])
{
    std::string str {"turns out random test cases are easier than writing out basic ones"};
    int res = find_short(str);
    std::cout << res << "\n";
}
