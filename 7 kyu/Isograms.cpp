#include <map>
#include <algorithm>
#include <iostream>
using namespace std;

bool is_isogram(string str)
{
    map <char, int> my_map;
    for_each(begin(str), end(str), [&](char ch) {
            ++my_map[tolower(ch)]; });
    for (auto& x : my_map) { if ( x.second > 1 ) return false; }
    return true;
}

int main(int argc, char* argv[])
{
    cout << "Enter the string: ";
    string str; cin >> str;
    cout << is_isogram(str) << "\n";
}
