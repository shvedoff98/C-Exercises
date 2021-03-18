#include <iostream>
#include <cmath>
using namespace std;

unsigned int sum_cubes(unsigned int n) 
{
    int result = 0;
    for( int i=1; i<=n; ++i )
    {
        result += pow(i,3);
    }
    return result;
}

int main()
{
    cout << sum_cubes(10) << "\n";
    return 0;
}
