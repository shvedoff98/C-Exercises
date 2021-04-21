#include <vector>
#include <bitset>
#include <iostream>
#include <string>
using namespace std;

string to_bin(int n)
{
    string res;

    do {
        res += to_string(n % 2);
    } while (n /= 2);

    size_t size = 8 - res.size();
    while (size > 0) { res += '0'; --size; }

    for (int i=0; i<res.size()/2; ++i) 
    {
        swap (res[i], res[res.size()-i-1]);
    }

    return res;
}

vector <string> word_to_bin(string word)
{
    vector <string> bin;
    for (auto& x : word) { bin.push_back(to_bin(int(x)));}
    cout << "\n";
    return bin;
}

int main(int argc, char* argv[])
{
    cout << " Enter the string: ";
    string str; cin >> str;
    vector <string> result =  word_to_bin(str);
    for (auto& x : result) { cout << x << "\n"; }
}
