#include <iostream>
using namespace std;

int projectPartners(int n)
{
    int count = 0;
    for (int i=1; i<n; ++i) { count += i; }
    return count;
}

int main(int argc, char* argv[])
{
    int n;
    cout  << "Enter the number: "; cin >> n; 
    cout << projectPartners(n) << "\n";
}
