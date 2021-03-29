#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string reverse_letter(const string &str)
{
    string copy(str.rbegin(),str.rend());
    copy.erase(remove_if(copy.begin(), copy.end(), [](char c) {return !isalpha(c);} ), copy.end());
    return copy;
}
int main(int argc, char* argv[])
{
    const string str = "wowlol12345";
    cout <<  reverse_letter(str) << "\n";
}

