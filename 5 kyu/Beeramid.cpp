#include <vector>
#include <cmath>

using namespace std;

int beeramid(int bonus , double price)
{
    if ( bonus < price ) {return 0;}
    
    int sum = 1, temp, increment = 2;
    auto f = bonus / price;
    
    //convert double to int if:
    if (abs(f - int(f)) > 0){f = static_cast<int>(f);}
    if (f > 0)
    {
        while ( sum < f )
        {
            sum += pow(increment,2);
            if (sum > f) {return increment-1;}
            increment ++;
        }
    }
    return increment-1;
}

int main(int argc, char* argv[])
{

    beeramid(-1,4);
    return 0;
}
