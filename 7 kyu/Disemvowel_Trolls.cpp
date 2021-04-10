#include <iostream>
#include <string>
using namespace std;
string disemvowel(string str)
{
    string res;
    for (auto& x : str) {
        if ( x == 'a' || x == 'A') { continue; }
        if ( x == 'i' || x == 'I') { continue; }
        if ( x == 'o' || x == 'O') { continue; }
        if ( x == 'e' || x == 'E') { continue; }
        if ( x == 'u' || x == 'U') { continue; }
        res += x;
    }
    return res;
}

int main(int argc, char* argv[])
{
    string str {"This website is for losers LOL!"};
    cout << disemvowel(str) << "\n";
}
