#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
using namespace std; 

class countDig
{

public:
    static int nbdig(int n, int d)
    {
        string elem = to_string(d);

        int result = 0; 
        for (int i=0; i<n+1; ++i)
        {
            string str = to_string(i*i);
            for (int i=0; i<str.size(); ++i)
            {
                if (string(1,str[i]) == elem) {++result;} 
            }
        }
        return result;
    }
};

int main(int argc, char* argv[])
{
    countDig x; int n,d;
    cout << "Enter n: "; cin >> n; 
    cout << "\nEnter d: "; cin >> d;
    cout << x.nbdig(n,d) << "\n";
}
