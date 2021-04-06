#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>
#include <string>               
using namespace std;


string highestScoringWord(const string &str)
{
    string alphabet = "0abcdefghijklmnopqrstuvwxyz0";
    int count = 0; // count the sum of leter's values in the word
    vector <pair <int, string>> vec; 
    const char space {' '}; string temp;
    size_t found;

    for (int i=0; i<str.size(); ++i)
    {
        found = alphabet.find_first_of(str[i]);
        if (found != string::npos){ 
            count += found;
            temp += str[i];
        } else {
            vec.push_back(make_pair(count, temp));
            count = 0; temp = "";
        }
        if (i == str.size()-1) { vec.push_back(make_pair(count, temp)); }
    }
    sort(vec.begin(), vec.end());
    for (auto x : vec) { if (x.first == vec[vec.size()-1].first)
        { 
            temp = x.second; return x.second;
        }}
    return temp;
}

int main(int argc, char* argv[])
{
    string str {"take two bintang and a dance please"};
    cout << highestScoringWord(str) << "\n";
}
