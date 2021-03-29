#include <vector>
#include <numeric>
#include <iostream>
#include <algorithm>

using namespace std;


int maxSequence(const vector<int>& arr)
{   
    vector <int> temp2;
    vector <int> temp1;
    int sum_max = 0, result;
    for(int i = 0; i < arr.size(); ++i)
    {
        sum_max = arr[i];
        for(int j = i+1; j < arr.size(); ++j)
        {
            sum_max += arr[j];
            temp1.push_back(sum_max);
        }
        result = *max_element(temp1.begin(), temp1.end());
        temp1.clear();
        temp2.push_back(result);
    }

    return *(max_element(temp2.begin(),temp2.end()));
    
}

int main()
{
    const vector <int> test = {-2,1,-3,4,-1,2,1,-5,4};
    maxSequence(test);
    return 0;
}
