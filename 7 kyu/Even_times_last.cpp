#include <iostream>
#include <vector>
using namespace std;

bool is_odd(int num) { return (num & 0x1) ? true : false; }

int even_last(vector<int> nums)
{
    int last = nums[nums.size()-1]; int result = 0;
    for(int i=0; i<nums.size(); ++i) 
    { 
        if (!is_odd(i)) { result += nums[i] * last; }
    }

    return  result;
}

int main(int argc, char* argv[])
{
    vector<int>nums {-11, 3, 3, 1, 10};
    cout << even_last(nums) << "\n";
}
