#include <string>
#include <iostream>
using namespace std;

bool hashUniqueChars(string s)
{
    if (s.size()==0) return false;
    for (int i=0; i<s.size(); ++i)
    {
        size_t found = s.rfind( string(1,s[i]) );
        if (found != string::npos && found != i){ return false; }
    }
    return true;
}

// Drive code 
int main(int argc,char* argv[])
{
    cout << hashUniqueChars("") << "\n";
    return 0;
}
