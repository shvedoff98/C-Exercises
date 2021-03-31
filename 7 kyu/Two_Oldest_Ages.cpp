#include <vector>
#include <algorithm>
using namespace std;

vector<int> two_oldest_ages(vector<int> ages)
{
    vector<int>result; int i = 0;
    while(i!=2)
    {
        auto x = max_element(ages.begin(), ages.end());
        result.push_back(*x); ages.erase(x); ++i;
    }
    sort(begin(result),end(result));
    return result;
}


int main()
{
    vector<int>test {6,5,83,5,3,18};
    vector<int>result = two_oldest_ages(test);
}
