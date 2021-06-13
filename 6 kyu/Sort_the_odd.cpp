#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>

class Kata
{
public:
    std::vector<int> sortArray(std::vector<int> array)
    {
	int i {0};
	std::vector<int> temp;

	std::for_each(std::begin(array), std::end(array), [&] (int& num) {
		    if (num & 0x1) temp.emplace_back(num); });

	std::sort (begin(temp), end(temp));

	for (auto& x : array) { if (x & 0x1) { x = temp[i]; ++i; } }
	return array;
    }
};

int main(int argc, char* argv[])
{
    Kata x; 
    std::vector<int> vec { 5, 3, 2, 8, 1, 4 };
    std::vector<int> res = x.sortArray( vec );
    for (auto& x : res) std::cout << x << " ";
    std::cout << "\n";
    return 0;
}
