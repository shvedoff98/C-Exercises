#include <string>
#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

size_t duplicateCount(const char* in)
{
    unordered_map<char, unsigned> counts;
    for (const char* c = in; *c != '\0'; ++c)
    {
        ++counts[tolower(*c)];
    }

    return count_if(cbegin(counts), cend(counts), [](const auto& count) {
            return count.second > 1; });
}

int main(int argc, char* argv[])
{
    cout << duplicateCount("aabbBccde") << "\n";
}
