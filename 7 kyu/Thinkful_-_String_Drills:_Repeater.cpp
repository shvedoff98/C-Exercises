#include <iostream>
#include <string>
using namespace std;

string repeater(string str, int n)
{
    string result;
    while(n) { result += str; --n; } 
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
