#include <string>
#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

string switcher(const vector<string>& arr) 
{
    string result;
    char ch {'a'}, elem_1 {'!'}, elem_2 {'?'}, elem_3 {' '};
    map<string, char> my_map;

    for (int i=26; i>0; --i, ++ch)
    {
        my_map[to_string(i)] = ch;
    }
    my_map[to_string(27)] = elem_1;
    my_map[to_string(28)] = elem_2;
    my_map[to_string(29)] = elem_3;

    for (const auto& y : arr) {result +=  my_map.find(y) -> second; }
    return result;
}

int main(int argc, char* argv[])
{
    vector<string>temps {"12", "28", "25", "21", "25", "7", "11", "22", "15"};
    cout << switcher(temps) << "\n";
}
