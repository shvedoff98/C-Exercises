#include <numeric>
#include <iostream>
#include <list>

using namespace std;


int findDeletedNumber(list<int> startingList, list<int> mixedList)
{
    int first = accumulate(startingList.begin(), startingList.end(), 0);
    int second = accumulate(mixedList.begin(), mixedList.end(), 0);
    return first - second;
}

int main(void)
{
    list<int>first =  {1,2,3,4,5,6,7,8,9};
    list<int>second = {5,7,1,9,4,8,2,3};
    cout << findDeletedNumber(first,second) << "\n"; 
}
