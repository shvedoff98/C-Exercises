#include <iostream>
#include <string>
using namespace std;

string repeater(string str, int n)
{
    string result; const char sp {' '};
    while(n) 
    {
        result += str; 
        if (str[str.size()-1] == sp) { result += " "; }
        --n; 
    } 
    return result;
}

int main(int argc, char* argv[])
{

    for (string str; cin >> str;)
    {
        cout << "Enter n: ";
        int n; cin >> n;
        cout << repeater(str, n) << "\n";
    }
}
