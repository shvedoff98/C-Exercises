#include <iostream>
#include <utility>
using namespace std;

pair <string, string> bald(const string& s)
{
    const char elem {'/'}; int count = 0; string str = s;

    for (auto& x : str) 
    { 
        if ( x == elem ) { x = '-'; ++count; } 
    }

    pair <string, string> res; res.first = str;

    if ( count == 0 ) { res.second = "Clean!"; }
    else if ( count == 1 ) { res.second = "Unicorn!"; }
    else if  ( count == 2 ) { res.second = "Homer!"; }
    else if ( count >= 3 && count <= 5 ) { res.second = "Careless!"; }
    else if ( count >  5 ) { res.second = "Hobo!"; }
    return res;
}


int main(int argc, char* argv[])
{
    for (string s; cin >> s; )
    {
        pair <string, string> res = bald(s);
        cout << res.first << ", " << res.second;
        cout << "\n";
    }
}
