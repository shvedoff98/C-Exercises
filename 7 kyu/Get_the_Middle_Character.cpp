#include <iostream>
#include <string>

std::string get_middle(std::string input)
{
    int i = input.size();
    // lambda returnin true if number is odd
    auto is_odd = [&](int num) { return (i & 0x1) ? true : false; };

    if ( is_odd(i) ) { return std::string (1, input[i / 2]); }
    return input.substr(i / 2 - 1, 2);
}

int main(int argc, char* argv[])
{
    for (std::string str; std::cin >> str;)
    {
        if (str == "stop") break;
        std::cout << get_middle(str) << "\n";
    }
}
