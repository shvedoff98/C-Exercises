// TIME COMPLEXITY IS O(N^2)


#include <cstring>
#include <string>
#include <iostream>
using namespace std;

bool scramble(const std::string& s1, const std::string& s2)
{
    string copy = s1;
    int sum = 0;
    for (int i=0; i < s2.size(); ++i)
    {
        size_t found = copy.find(string(1,s2[i]));
        if (found != string::npos)
        {
            sum++;
            copy.erase(found,1);
            continue;
        }
    }
    if (sum == s2.size()){return true;}
    return false;

}

int main(int argc, char* argv[])
{
    scramble("sammoc", "commas");
    return 0;
}
