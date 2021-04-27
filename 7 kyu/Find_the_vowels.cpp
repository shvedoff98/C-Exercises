#include <vector>
#include <iostream>
#include <string>

bool is_vowel(char ch)
{
    char x = tolower(ch);
    if (x == 'a' || x == 'e' || x == 'y' ||
            x == 'o' || x == 'u' || x == 'i')
    {
        return 0x1;
    }
    return 0x0;
}

std::vector<int> vowelIndices(const std::string& word)
{
    std::vector<int> res;
    for (int i=0; i<word.size(); ++i)
    {
        if ( is_vowel(word[i]) ) res.push_back(i+1);
    }
    return res;
}

int main(int argc, char* argv[])
{
    for (std::string str; std::cin >> str;)
    {
        std::vector <int> res = vowelIndices(str);
        for (auto& x : res) { std::cout << x << " "; }
        std::cout << "\n";
    }
}

