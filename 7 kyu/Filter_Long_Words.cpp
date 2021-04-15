#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

vector<string> filter_long_words(const string& sentence, int n) 
{
    vector <string> result , res_fin; string temp;
    for (auto it = begin(sentence); it != end(sentence); ++it)
    {
        if ( *it == ' ' ) { result.push_back(temp); temp = ""; continue; }
        else { temp += *it; continue; }
    }
    result.push_back(temp);
    for (auto& x : result) { if (x.size() > 4 ) { res_fin.push_back(x); } }
    return res_fin;
}

int main(int argc, char* argv[])
{
    int num = 4;
    string str {"The quick brown fox jumps over the lazy dog"};
    vector <string> res = filter_long_words(str, num);
    for (auto& x : res) { cout << x  << " "; }
    cout << "\n";
}
