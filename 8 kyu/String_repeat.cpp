#include <iostream>
#include <iterator>
#include <sstream>
#include <string>


std::string repeat_str(size_t n, std::string const& str)
{
    std::ostringstream ost;
    generate_n(std::ostream_iterator<std::string>{ ost }, n, [&str] { return str; });
    return ost.str();
}

int main(int argc, char* argv[])
{
    size_t n; 
    std::string str;
    for (n, str; std::cin >> n >> str;)
    {
        std::cout << repeat_str (n, str) << "\n";
    }
}
