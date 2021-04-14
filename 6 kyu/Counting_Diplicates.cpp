#include <iostream>
#include <set>
#include <cstring>
using namespace std;

int count (const char* in, char value)
{
    int size = strlen(in);
    int init = 0;
    for (int i=0; i<size; ++i)
    {
        if (in[i] == value || in[i] == toupper(value)) ++init;
    }
    return init;
}

set<char> add_to_set(const char* in)
{
    set<char> res;
    for (int i=0; i<strlen(in); ++i)
    {
        char ch = tolower(in[i]);
        res.insert(ch);
    }
    return res;
}


size_t duplicatesCount(const char* in)
{
    size_t init = 0;
    set<char> res = add_to_set(in);
    for (auto x : res) 
    {
        if (count(in, x) > 1)
        {
            cout << x << ", " << count(in, x) << ";  ";
            ++init;
            cout << "\n";
        }
    } 
    return init;
}

int main(int argc, char* argv[])
{
    const char in [] {"(aabbcde"};
    cout << duplicatesCount(in) << "\n";
}
