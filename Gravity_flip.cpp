#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>


struct great
{
    bool operator() (int& x, int& y) { return x > y; }

} greater;

std::vector<int> flip(const char dir, const std::vector<int>& arr) 
{
    std::vector<int> vec = arr;
    if (dir == 'R')
    {
        sort(vec.begin(), vec.end());
        return vec;
    }
    else
    {
        std::sort(vec.begin(), vec.end(), greater);
        return vec;
    }
}


int main(int argc, char* argv[])
{
    const char f {'L'};
    std::vector<int> vec {3,2,1,2};
    std::vector<int> fin = flip (f, vec);
    for (auto x : fin)
    {
        std::cout << x << " ";
    }
    std::cout << "\n";
}
