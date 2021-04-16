#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> get_even_numbers(vector<int> arr)
{
    arr.erase(remove_if
            (arr.begin(), arr.end(), [] (const int n) { 
             return n % 2; } ), arr.end());
    return arr;
}

int main(int argc, char* argv[])
{
    vector<int> result = get_even_numbers({1,2,3,4,5,6,7,8,9,0});
    for (auto x : result) { cout << x << " "; }
    cout << "\n";
}
