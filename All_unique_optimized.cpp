#include <set>
#include <iostream>
using namespace std;

bool hasUniqueChars(string s)
{
    int len = s.size();
    for (set<char>::iterator it=myset.begin(); it!= myset.end(); ++it)
    {
        cout << " " << *it;
    }
    cout << "\n";

    return s.size() == set<char>(s.begin(),s.end()).size();
}

int main()
{
    cout << hasUniqueChars("abcdef") << "\n";
}
