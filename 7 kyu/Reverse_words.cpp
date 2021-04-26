#include <string>
#include <iostream>

template <typename T>
void swap (T& a, T&b)
{
    T c {a}; a = b; b = c;
}

std::string reverse_str(std::string& str)
{
    int sz = str.size();
    for (int i=0; i<sz/2; ++i)
    {
        ::swap(str[i], str[sz-i-1]);
    }
    return str;
}

std::string reverse_words(std::string str)
{
    std::string result, temp;
    for (auto& x : str)
    {
        if (x == ' ')
        {
            result += reverse_str(temp);
            result += ' ';
            temp = "";
            continue;
        }
        temp += x;
    }
    return result += reverse_str(temp);
}

int main(int argc, char* argv[])
{
    std::string str {"The quick brown fox jumps over the lazy dog."};
    std::cout << reverse_words(str) << "\n";
}
