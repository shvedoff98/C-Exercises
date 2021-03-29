#include <string>
#include <cstring>
using namespace std;

int largest_five_digits(const string &digits)
{
    int temp = stoi(digits.substr(0,5));
    int dif = digits.size()-5;
    for (int i=1; i < digits.size(); ++i)
    {
        if ((stoi(digits.substr(i,5))) > temp)
        {
            temp = stoi(digits.substr(i,5));
        }
    }
    return temp;
}

//DRIVE CODE

int main(void)
{
    largest_five_digits("1234567890");
}
