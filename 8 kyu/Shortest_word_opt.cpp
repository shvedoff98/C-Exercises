#include <iostream>
#include <vector>
#include <sstream>

int find_short(std::string str)
{
    int res = str.size();
    std::vector<std::string> vec;
    std::string temp; 
    std::istringstream ist {str};
    while (getline(ist, temp, ' '))
    {
        if (res > temp.size()) res = temp.size();
        vec.push_back(temp);
    }
    return res;
}

int main(int argc, char* argv[])
{
    std::cout << find_short("lets talk about javascript the best language") << "\n";
}
