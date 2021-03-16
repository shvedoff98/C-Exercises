#include <list>

using namespace std;

int findDeletedNumber(list<int> startingList, list<int> mixedList)
{
    int number = 0;
    list<int>compare = startingList;
    for (auto x : startingList)
    {
        for (auto y : mixedList)
        {
            if (x == y){compare.remove(x);}
        }
    }
    return compare.front();
}
int main(int argc,char* argv[])
{
    list<int>startlist = {1};
    list<int>mixedlist = {};
    cout << findDeletedNumber(startlist,mixedlist);
}
