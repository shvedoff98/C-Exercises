#include <iostream>
#include <string>

std::string cleanString(const std::string &s) 
{
    std::string result;
    for (auto& x : s)
    {
        if (x != '#') result += x;
        else if ( result.size() > 0 ) result.pop_back();
    }
    return result;
}

int main(int argc, char* argv[])
{
    for (std::string str; std::cin >> str; )
    {
        std::cout << cleanString(str) << "\n";
    }
}
