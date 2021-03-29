#include <iostream>
#include <cmath>
#include <string>
using namespace std;
class DigPow
{
public:
  static int digPow(int n, int p);
};

int DigPow::digPow(int n,int p)
{   
   int sum = 0;
   string str = to_string(n);
   for(auto i=0;i<str.size();++i)sum+=pow(stoi(string(1,str[i])),p++);

   switch(sum % n)
   {
       case 0: cout<<(sum/n);return(sum/n);
       default: cout<<-1;return -1;
   }
}

int main()
{
    DigPow x;
    x.digPow(114,3);
    return 0;
}
