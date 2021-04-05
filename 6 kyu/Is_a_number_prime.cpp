#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num)
{
    if ( num <= 1 ) { return false; }
    for (int i = 2; i*i <= num; ++i)
    {
        if ( num % i == 0 ) { return false; }
    }
    return true;
}

int main(int argc, char* argv[])
{
    cout << "Enter the number: ";
    int num; cin >> num;
    cout << isPrime(num) << "\n";
}
