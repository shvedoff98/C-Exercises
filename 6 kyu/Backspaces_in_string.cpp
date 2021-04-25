#include <iostream>
#include <algorithm>
#include <string>

std::string cleanString(const std::string &s)
{
    if (count(s.begin(), s.end(), '#') == s.size()) return "";
    std::string str = s;
    size_t found = str.find_first_of('#', 0);
    while ( found != std::string::npos)
    {
        if ( found == 0 ) { found = str.find_first_of('#', found+1); continue;}

        str.erase(found-1, 2);
        found = str.find_first_of('#', found-1);
    }
    if (str[0] == '#')  str.erase(0, 1);
    return str;
}


int main(int argc, char* argv[])
{
    for (std::string str; std::cin >> str;)
    {
        std::cout << cleanString(str) << "\n";
    }
}
