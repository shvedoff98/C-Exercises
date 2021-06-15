#include <iostream>
#include <vector>
#include <utility>


std::pair<size_t, size_t> two_sum(std::vector<int> const& numbers, int target)
{
    std::pair <size_t, size_t> res;
    for (size_t i = 0; i < numbers.size()-1; ++i)
    {
	for (size_t j = i+1; j < numbers.size(); ++j)
	{
	    if (numbers[i] + numbers[j] == target)
	    {
		res.first = i;
		res.second = j;
	    }
	}
    }
    return res;
}


int main(int argc, char* argv[])
{
    std::vector<int> vec = {2, 2, 3};

    std::pair<size_t, size_t> res = two_sum(vec, 4);
    std::cout << res.first << " " << res.second << "\n";
}
