#include <iostream>
using namespace std;

int pyramid(int n)
{
    int levels = 0;
    int count = 1; int num = 1;
    while (count <= n)
    {
        ++levels; ++num;
        count += num;
    }
    return levels;
}

int main(int argc, char* argv[])
{
    cout << "Enter the number of balls: ";
    int n; cin >> n;
    cout << pyramid(n) << "\n";
}
