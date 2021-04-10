#include <iostream>
#include <string>
using namespace std;

string  broken(const string& inp)
{
    string result = inp;
    for (auto& x : result) { x == '1' ? x = '0' : x = '1'; }
    return result;
}

int main(int argc, char* argv[])
{
    cout << "Enter the string to transform: ";
    string str; cin >> str;
    cout << broken(str) << "\n";
}
