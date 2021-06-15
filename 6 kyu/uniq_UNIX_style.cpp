#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

std::vector<std::string> uniq(const std::vector<std::string> &v) 
{
    std::vector<std::string> res(v.size());

    auto it = std::unique_copy(v.begin(), v.end(), res.begin());
    res.resize(std::distance(res.begin(), it));

    return res;
}


int main(int argc, char* argv[])
{
    std::vector<std::string> vec {"a", "a", "b", "c", "c", "d", "a", "a", "a"};

    std::vector<std::string> res = uniq (vec);

    for (auto const& x : res)
    {
	std::cout << x << " ";
    }
    std::cout << "\n";

    exit (EXIT_SUCCESS);
}
