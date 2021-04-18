#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> move_zeroes(const vector<int>& input)
{
    vector <int> res = input;
    auto end = remove(res.begin(), res.end(), 0);
    fill(end, res.end(), 0);
    return res;
}


int main(int argc, char* argv[])
{
    vector <int> input {12, -2, -11, 2, 9, -14, -19, -6, -15, -4, 1, -17, 17, -6, 2, -10, 11, -18, 4, -14, -8, 7, -19, -4, 18, 4, -19, 7, -15, -18, 18, -6, 11, -2, 14, -6, -6, -3, 16, -18, 7, 6, -16, 8, 1, 10, 11, -3, -7, -3, 5, -1, -1, -12, -10, 0, 0, -9, 3, 4, 19, 1, 12, 15, 14, 12, -10};
    vector <int> result = move_zeroes(input);
    for (const auto& x : result) { cout << x << " "; }
    cout << "\n";
}


