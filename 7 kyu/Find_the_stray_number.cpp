#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int stray(vector<int>numbers)
{
    sort(begin(numbers), end(numbers));
    int x = count(begin(numbers) , end(numbers), numbers[0]);
    int y = count(begin(numbers) , end(numbers), numbers[numbers.size()-1]);
    if (x > y) { return numbers[numbers.size()-1]; }
    return numbers[0];
}

int main(int argc, char* argv[])
{
    vector<int>vec { 17, 17, 3, 17, 17, 17, 17 };
    cout << stray(vec) << "\n";
}
