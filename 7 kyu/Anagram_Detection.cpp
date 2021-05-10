#include <string>
#include <iostream>

void to_Lower(std::string& original)
{
    for (auto& x : original)
    {
        x = tolower(x);
    }
}


bool isAnagram(std::string test, std::string original)
{
    if (test.size() != original.size())  return 0x0;

    to_Lower(original); to_Lower(test);
    std::cout << test << " " << original << "\n";
    size_t found;

    for (size_t i = 0; i < test.size(); ++i)
    {
        found = original.find(test[i]);
        if (found == std::string::npos) return false;
        original[found] = '0';
    }
    return true;
}

int main(int argc, char* argv[])
{
    for (std::string str,str2; std::cin >> str >> str2; )
    {
        std::cout << isAnagram(str, str2) << "\n";
    }
    return 0;

}