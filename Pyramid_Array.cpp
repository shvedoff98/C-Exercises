#include <iostream>
#include <iterator>
#include <vector>
#include <cstdlib>
using namespace std;

vector <vector<int>> pyramid(size_t n)
{
    vector<vector<int>> result; int i = 1;
    while(i <= n) { result.push_back(vector<int>(i,1)); ++i;}
    return result;
}

int main(int argc, char* argv[])
{
    size_t n; cin >> n;
    vector <vector<int>> result = pyramid(n);
    vector<vector<int>>::iterator i;
    vector<int>::iterator j;
    for (i = result.begin(); i!=result.end(); ++i)
    {
        cout << " [ ";
        for (j = i->begin(); j!= i->end(); ++j)
        {
            cout << *j << " ";
        }
        cout << " ] ";
    }
    
}
