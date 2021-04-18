#include <iostream>
#include <string>
using namespace std;

class Accumul {
    public:
        static string accum(const string &s);
};

string Accumul::accum(const string& s)
{
    string res; 
    for (int i=0 ; i<s.size(); ++i)
    {
        res += toupper(s[i]);
        res += string(i , tolower(s[i]));
        if (i <s.size()-1)  res += '-';
    }
    return res;
}

int main(int argc, char* argv[])
{
    Accumul Ex; 
    cout << "Enter the string: ";
    string str; cin >> str;
    string x = Ex.accum(str); cout << x << "\n";
}
