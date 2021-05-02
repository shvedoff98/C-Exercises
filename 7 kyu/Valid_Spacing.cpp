#include <string>
#include <iostream>


bool valid_spacing(const std::string& s)
{
    for (size_t i = 0; i<s.size(); ++i)
    {
        if (s.substr(i,2) == "  ")
            return false;

        else if (s[i] == ' ' && (i == 0 || i == s.size()-1))
            return false;
    }
    return true;
}

int main(int argc, char* argv[])
{
    std::cout << valid_spacing("Hello  world") << "\n";
}
