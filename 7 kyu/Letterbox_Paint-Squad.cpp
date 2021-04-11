#include <iostream>
#include <vector>
#include <array>
using namespace std;

int my_count(vector<int> vec, int num)
{
    int count = 0;
    for (auto it = vec.begin(); it != vec.end(); ++it)
    {
        if ( *it == num ) ++ count;
    }
    return count;
}

array<int, 10> paint_letterboxes(int start, int end)
{
    array<int, 10> res; 
    vector <int> digits;

    for (int i=start; i <= end; ++i)
    {
        int temp = i;
        do {
            int num = temp % 10;
            digits.push_back(num); 
        } while ( temp /= 10 );
    }

    for (int i=0; i<10; ++i) { res[i] = my_count(digits, i); }

    return res;
}

int main(int argc, char* argv[])
{
    int start, end;
    cout << "Enter the start: "; cin >> start;
    cout << "Enter the end: ";  cin >> end;
    array <int, 10> res = paint_letterboxes(start, end);
    for (const auto& x : res) { cout << x << " "; }; cout << "\n";
}
