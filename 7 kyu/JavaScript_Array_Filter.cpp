#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool is_even(int num)
{
    if (num % 2 == 0) { return num; }
    return false;
}

vector <int> get_even_numbers(const vector<int>& arr)
{
    vector <int> fin;
    for (const auto& x : arr) { if (is_even(x)) { fin.push_back(x); } }
    return fin;
}

int main(int argc, char* argv[])
{
    vector <int> vec {1, 2, 3, 4, 5};
    vector <int> res = get_even_numbers(vec);
    for (const auto& x : res) cout << x << " ";
    cout << "\n";
}
