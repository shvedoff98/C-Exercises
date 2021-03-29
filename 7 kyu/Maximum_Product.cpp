#include <iostream>
#include <vector>

using namespace std;

int adjacentElementsProduct(vector<int>inputArray)
{
    int sum = inputArray[0]*inputArray[1];
    for (int i=0; i<inputArray.size()-1; ++i)
    {
        int temp = inputArray[i]*inputArray[i+1];
        if (sum < temp) { sum = temp; }
    }
    return sum;
}

int main(int argc, char* argv[])
{
    cout << adjacentElementsProduct(vector<int> {1,0,1,0,1000}) << "\n";
}
