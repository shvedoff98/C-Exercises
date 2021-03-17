#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int n)
{
    for (int i=2; i*i<=n; ++i)
    {
        if (n % i == 0){return false;}
    }
    return true;
}

int nextPrime(int n)
{
    if (n == 0) return 2;
    while(n)
    {
        n++;
        if (isPrime(n) == 0){continue;}
        return n;
    }
    return n;
}

int main(int argc, char* argv[])
{
    cout << nextPrime(17) << "\n";
    return 0;
}
