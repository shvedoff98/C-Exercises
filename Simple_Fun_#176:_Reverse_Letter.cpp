#include <string>
#include <iostream>
using namespace std;

string reverse_letter(const string &str)
{
    string result;
    for (int i=str.size(); i>=0; --i)
    {
        string alp = "abcdefghijklmnopqrstuvwxyz";
        size_t found = alp.find_first_of(str[i]);
        if (found != string::npos) { result += alp[found]; }
    }

    return result;
}


int main(int argc, char* argv[])
{
    const string str {"krish21an"};
    cout << reverse_letter(str) << "\n";
}
