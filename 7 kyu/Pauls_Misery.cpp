#include <string>
#include <utility>
#include <vector>
#include <iostream>
using namespace std;

string paul (const vector<string>& x) 
{
    int count = 0; string result;
    pair <string, int> kata {"kata", 5};
    pair <string, int> Petes_kata {"Petes kata", 10};
    pair<string, int> life {"life", 0};
    pair <string, int>  eating {"eating", 1};

    for (int i=0; i<x.size(); ++i)
    {
        if ( x[i] == kata.first ) { count += kata.second; }
        if ( x[i] == Petes_kata.first ) { count += Petes_kata.second; }
        if ( x[i] == life.first ) { count += life.second; }
        if ( x[i] == eating.first ) { count += eating.second; }
    }
    cout << count << "\n";
    if ( count < 40 ) { result += "Super happy!"; }
    if ( count < 70 && count >= 40 ) { result += "Happy!"; }
    if ( count < 100 && count >= 70 ) { result += "Sad!"; }
    if ( count >= 100 ) { result += "Miserable!"; } 

    return result;
}

int main(int argc, char* argv[])
{
    string stop {"stop"};
    vector <string> x {"Petes kata", "Petes kata", "Petes kata", "Petes kata", "Petes kata", "Petes kata", "Petes kata", "Petes kata", "Petes kata", "Petes kata"};
    /*
    for ( string s; cin >> s; )
    {
        cout << "Enter the string or stop it: ";
        if ( s == stop ) { break; }
        x.push_back(s);
    }
    */
    cout << paul(x) << "\n";
    
}
