#include <iostream>
#include <cstring>
#include <string>

using namespace std;

class MaxRotate
{
public:
  static long long maxRot(long long n)
    {
        int iter_begin = 0;
        string temp;
        string x = to_string(n);
        long long big = n;
        for (int i=0; i < x.size(); ++i)
        {
            x.push_back(x[iter_begin]);
            x.erase(iter_begin, 1);
            ++iter_begin; 
            if (stoll(x) > big) { big = stoll(x); }
            if ( iter_begin == x.size()-1) { break; return big; }
        }
        return big;
    }
};


int main(void)
{
    long long n; 

    for(;;)
    {
        cin >> n;
        MaxRotate x; cout << x.maxRot(n) << "\n";
    }
}
