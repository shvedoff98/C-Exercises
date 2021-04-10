#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string flyBy(string lamp, string drone)
{
    int size;
    if (drone <= lamp) { size = lamp.size() - drone.size(); }
    transform(begin(lamp), end(lamp)-size, begin(lamp), [] (char& c) {
            return c = 'o'; });
    return lamp;
}

int main(int argc, char* argv[])
{
    string lamp, drone;
    cout << "Enter the lamp and the drone: \n";
    cin >> lamp >> drone;
    cout << flyBy(lamp, drone) << "\n";
}
