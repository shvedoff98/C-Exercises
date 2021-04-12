#include <iostream>
#include <string>
using namespace std;

string cat_mouse(string x)
{
    int count = 0;
    for (const auto& ch : x) { if ( ch == '.' ) { ++count; } }

    if ( count > 3 ) { return "Escaped!"; }
    else { return "Caught!"; }
}

int main(int argc, char* argv[])
{
    cout << "Enter the string: ";
    string str; cin >> str;
    cout << cat_mouse(str) << "\n";
}
