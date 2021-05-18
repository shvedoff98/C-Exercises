#include <string>
#include <iostream>



std::string multi_table(int number)
{
    int i {0};
    std::string str;
    while (++i <= 10) 
    {
      str += std::to_string(i) + " * " +
      std::to_string(number) + " = " + 
      std::to_string(i*number) + "\n";
    }
    return str; 
}

int main(int argc, char* argv[])
{
    std::cout << multi_table(5) << "\n";
}
