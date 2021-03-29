#include <string>
#include <vector>
#include <cctype>
#include <iostream>
using namespace std;

string max_element(const vector<int> x)
{
    int min = x[0];
    int max = x[0];
    for (int i=0; i<x.size(); ++i)
    {
        if (x[i] < min) { min = x[i]; }
        if (x[i] > max) { max = x[i]; }
    }

    return to_string(max) + " " + to_string(min);
}

string highAndLow(const string& numbers)
{
    string temp = numbers;
    vector<int>digits;
    const char min {'-'};
    int max = 0;
    for (int i=0; i<temp.size(); ++i)
    {
        if (temp[i] == min)
        {
            int count = 1;
            while(isdigit(temp[i+count]))
            {
                ++count;
            }
            int x = stoi(temp.substr(i,count));
            digits.push_back(x);
            i += count;
            continue;
        }
        else if ( isdigit(temp[i]) ) 
        {
            int count = 1;
            while (isdigit(temp[i+count]))
            {
                ++count;
            }
            int x = stoi(temp.substr(i,count));
            digits.push_back(x);
            i += count;
            continue;
        }
    }
    for (auto y : digits) { cout << y << " "; }
    cout << "\n";
    return max_element(digits);
}

int main(int argc,char* argv[])
{
    string numbers {"1 9 -9993 3 4 77777 -5"};
    cout << highAndLow(numbers) << "\n";
}
