#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

string bumps(string road)
{
    int num = count(road.begin(), road.end(), 'n' );
    if (num <= 15) return "Woohoo!";
    return "Car Dead!";
}

int main(int argc, char* argv[])
{
    cout << "Enter the string: ";
    string str; cin >> str;
    cout << bumps(str) << "\n";
}
