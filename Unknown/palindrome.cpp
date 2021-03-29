#include <iostream>
#include <iostream>
using namespace std;

bool is_palindrome(const string& s)
{
    int first = 0;
    int last = s.size() - 1;
    while(first < last)
    {
        if(s[first] != s[last]){ return false; }
        ++first;
        --last;
    }

    return true;
}

int main(int argc, char* argv[])
{
    for (string s; cin >> s;)
    {
        cout << s << " is";
        if(!is_palindrome) cout << " not";
        cout << " a palindrome." << "\n";
    }
}

