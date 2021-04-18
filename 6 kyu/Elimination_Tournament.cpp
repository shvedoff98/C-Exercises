#include <vector>
#include <iostream>
using namespace std;


bool is_odd(int num)
{
    if (num % 2 == 0) return false;
    return true;
}

int high(int x, int y)
{
    if ( x > y ) { return x; }
    return y;
}

vector<vector<int>> tourney(const vector<int>& input)
{
    vector <vector<int>> result; 
    vector <int> temp, vec; 

    temp = input; result.push_back(temp); 

    if (is_odd(temp.size())) { vec.push_back(temp[temp.size()-1]); }

    do{

        for (int i=0; i<temp.size(); i+=2 )
        {
            if (i == temp.size()-1) break;
            int num = high(temp[i], temp[i+1]);
            vec.push_back(num); 
        }

        temp = vec; vec = {};
        if (is_odd(temp.size())) { vec.push_back(temp[temp.size()-1]); }
        result.push_back(temp);

    } while (temp.size() > 1);

    return result;
}

int main(int argc, char* argv[])
{
    vector<int>input {30, 80, 62, 43, 83, 57, 38, 53, 85, 69, 22, 6, 100, 51, 94, 3, 29, 71, 15, 72, 39, 36, 3, 42, 50, 78, 94, 69, 9, 74, 43, 84, 86, 25, 32, 77, 35, 77, 63, 35, 27, 6, 48, 2, 85, 7, 11, 50, 95};
    vector<vector<int>>res = tourney(input);
    for (auto it = res.begin(); it != res.end(); ++it)
    {
        for (auto jt = it->begin(); jt != it->end(); ++jt)
        {
            cout << *jt << " ";
        }
        cout << "\n";
    }
}
