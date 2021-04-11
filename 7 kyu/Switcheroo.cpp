#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string switcheroo(const string& s)
{
    string str = s;
    auto lambda = [] (char& ch) {
        if (ch == 'a') { return ch = 'b'; }
        if (ch == 'b') { return ch = 'a'; }
        return ch;
    };

    for_each(begin(str), end(str), lambda);
    return str;
}

int main(int argc, char* argv[])
{
    cout << "Enter the string:\n";
    string str; cin >> str;
    cout << switcheroo(str) << "\n";
}
