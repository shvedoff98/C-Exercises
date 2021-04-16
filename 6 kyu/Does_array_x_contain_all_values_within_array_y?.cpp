#include <vector>
#include <iostream>
#include <algorithm>
using namespace std; 

bool contains_all(const vector<int>& arr, const vector<int>& target)
{
    vector<int>digits = arr; sort(begin(digits), end(digits));
    for (auto& x : target) { if (!binary_search(begin(digits), end(digits), x)) { return false; } }
    return true;
}

int main(int argc, char* argv[])
{
    vector<int> items {1, -8, -2, 0, 8, -1, -2, -7, -8, -2, 2, -1, 8, 10, 6, 10, 2, -4, 8, -7, -1, -2};
    vector<int> check {-8};
    cout << contains_all(items, check) << "\n";
}
