#include <string>
#include <iostream>
using namespace std;


string solution(int n)
{
    string str {"00000"}; string s {to_string(n)};
    return str.replace(str.size()-s.size(), s.size(), s);
}

int main(int argc, char* argv[])
{
    cout << "Enter the number: ";
    int n; cin >> n;
    cout << solution(n) << "\n";
}
