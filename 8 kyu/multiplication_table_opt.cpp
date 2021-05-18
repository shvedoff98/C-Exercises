#include <string>
#include <iostream>
#include <sstream>

std::string multi_table(int number)
{
    std::ostringstream ost;
    for (int i=1; i<=10; ++i)
    {
        ost << i << " * " << number << " = " << i*number << (i<10 ? "\n" : "");
    }
    return ost.str();
}

int main(int argc, char* argv[])
{
    std::cout << multi_table(5) << "\n";
}
