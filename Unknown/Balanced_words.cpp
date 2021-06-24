#include <string>
#include <iostream>

bool balanced(std::string word)
{
    bool odd = (word.size() & 0x1);
    int left {0};
    int right {0};
    for (size_t i = 0; i < word.size(); ++i)
    {
	if (odd)
	{
	    if ( i == word.size()/2) continue;
	    else if (i < word.size()/2 ) left += word[i]-'0';
	    else right += word[i]-'0';
	    continue;
	}
	else if ( i < word.size()/2 ) left += word[i]-'0';
	else right += word[i] -'0';
    }
    return left == right;
}

int main(int, char**)
{
    std::cout << balanced ("edabit");
    std::cout << "\n";
    std::cout << 1 % 10 << "\n";
}
