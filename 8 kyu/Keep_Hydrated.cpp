#include <iostream>
#include <cmath>

int litres(double time)
{
    double count = 0;
    int time_n = static_cast<int> (std::floor(time));
    while (time_n--)
    {
        count = count + 0.5;
    }
    return static_cast<int>(std::floor(count));
}

int main(int argc, char* argv[])
{
    for (double time; std::cin >> time; )
    {
        std::cout << litres(time) << "\n";
    }
}
