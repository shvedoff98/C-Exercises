#include <string>
#include <iostream>
using namespace std;

long long reverseNumber(long long n)
{
    string temp = to_string(n);

    for (int i=temp.size()-1; i >= 0; --i)
    {
        res += temp[i];
    }
    return stoll(res);
}
int main(int argc, char* argv[])
{
    long long num; cin >> num;
    cout << reverseNumber(num) << "\n";
}
