#include <string>
#include <iostream>
using namespace std;

bool solution(string const &str, string const &ending)
{
    string temp = str;
    temp.erase(temp.begin(), temp.begin()+str.size()-ending.size());
    return (temp == ending) ? true : false;
}

int main(int argc, char* argv[])
{
    cout <<solution("abcde", "cde") << "\n";
}
