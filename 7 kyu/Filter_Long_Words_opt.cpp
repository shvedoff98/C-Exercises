#include <sstream>
#include <iostream>
#include <vector>
using namespace std;

vector<string> filter_long_words(const string& sentence, int n)
{
    vector <string> res;
    istringstream ss {sentence};
    string temp;
    while (ss >> temp) { if (temp.size() > 4) res.push_back(temp); }
    return res;
}

int main(int argc, char* argv[])
{
    string str {"The quick brown fox jumps over the lazy dog"};
    vector <string> result = filter_long_words(str, 4);
    for (auto& x : result) { cout << x << " "; }
    cout << "\n";
}
