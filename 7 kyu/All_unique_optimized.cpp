#include <set>
using namespace std;

bool hasUniqueChars(string s)
{
    return s.size() == set<char>(s.begin(),s.end()).size();
}

int main()
{
    hasUniqueChars("abcdef") << "\n";
}
