#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

int getCount(const string& inputStr)
{
    int num_vowels = 0;
    auto lambda = [&] (char ch) { 
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o'
                || ch == 'u') ? ++num_vowels : num_vowels+=0; };

    for_each(inputStr.begin(), inputStr.end(), lambda);
    return num_vowels;
}

int main(int argc, char* argv[])
{
    cout << "Enter the string: ";
    string str; cin >> str;
    cout << getCount(str) << "\n";
}
