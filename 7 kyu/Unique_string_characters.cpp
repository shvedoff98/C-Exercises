#include <iostream>
#include "utility.h"
#include <algorithm>
#include <string>

using namespace utility;


std::string solve (std::string a, std::string b)
{
    std::string res, x=a, z=b;
    std::sort(x.begin(), x.end());
    std::sort(z.begin(), z.end());
    for (auto item : a)
    {
	bool found = std::binary_search(z.begin(), z.end(), item);
	if (!found) { res += item; }
    }

    for (auto item : b)
    {
	bool found = std::binary_search(x.begin(), x.end(), item);
	if (!found) { res += item; }
    }
    return res;
}

int main(int argc, char* argv[])
{
    for(std::string s, t; std::cin >> s >> t; )
    {
	std::cout << solve (s, t) << "\n";
    }
}
