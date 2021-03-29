#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
string odd_or_even(const vector<int> &arr)
{
    return accumulate(arr.begin(),arr.end(),0) ==2 ? "even" : "odd";
}

int main(int argc, char* argv[])
{
    cout << odd_or_even(vector<int>{0,1,4}) << "\n";
    return 0;
}
