#include <cinttypes>
#include <algorithm>
#include <sstream>
#include <vector>
using namespace std;


uint64_t descendingOrder(uint64_t a)
{
    string res; uint64_t value;
    vector <int> arr;
    do{
        arr.push_back(a%10);
    } while ( a /= 10 );

    sort(arr.begin(),arr.end());
    reverse(arr.begin(),arr.end());

    for (auto x : arr) {res += to_string(x);}
    istringstream iss(res); iss >> value;
    return value;
}
