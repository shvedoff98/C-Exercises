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
    cout << is_palindrome("wiiiiiiiuiiiiiiiw") << "\n";
    return 0;
}

