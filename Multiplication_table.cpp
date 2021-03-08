#include <vector>

using namespace std;

vector <vector<int>> multiplication_table(int n)
{
    int count = 2;
    vector <vector<int>> result;
    vector <int> temp1;
    vector <int> temp;
    for(int j = 1; j < n+1; ++j)
    {
        temp1.push_back(j);
    }
    result.push_back(temp1);

    for(int m = 1; m < n; ++m)
    {
        for(int i = 0; i < n; ++i)
        {
            temp.push_back(temp1[i]*count);
        }
        result.push_back(temp);
        temp.clear();
        count ++;

    }


    /*for (const auto it : result)
    {
        for(const auto jt : it)
        {
            cout << "  " << jt << "  ";
        }
        
        cout << "\n";
    }

    return result;*/
}

int main()
{
    int test = 5;
    multiplication_table(test);
    return 0;
}
