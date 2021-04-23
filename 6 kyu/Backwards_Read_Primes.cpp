#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

typedef long long ll;


class BackWardsPrime
{
    public:
        static std::string backwardsPrime(ll start, ll end);
};

string BackWardsPrime::backwardsPrime(ll start, ll end)
{
    string result, temp;
    auto lambda = [&] (ll num) -> bool { 

        temp = to_string(num);
        reverse(temp.begin(), temp.end());
        bool flag1 = true;
        bool flag2 = true;
        for (ll i=2; i*i <=num; ++i) 
        {
            if (num % i == 0) { flag1 = false; break; }
        }
        if (flag1 &&  stoll(temp) == num) { return false;}
        if (flag1) 
        {
            for (ll i=2; i*i<=stoll(temp); ++i)
            {
                if (stoll(temp) % i == 0) { flag2 = false; break; }
            }
        }

        return (flag1 == true && flag2 == true) ? true : false;
    };


    for (ll i=start; i<=end; ++i) 
    {
        if (lambda(i)) { result += to_string(i) + " "; }
    }

    if (result[result.size()-1] == ' ') { result.erase(result.size()-1, 1); };
    return result;
}

int main(int argc, char* argv[])
{
    cout << "Enter 2 numbers: ";
    ll num1, num2; cin >> num1 >> num2;
    BackWardsPrime obj;
    cout << obj.backwardsPrime(num1, num2) << "\n";
}
