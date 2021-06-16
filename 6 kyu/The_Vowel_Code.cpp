#include <string>
#include <algorithm>
#include <iostream>
#include <unordered_map>


typedef std::unordered_map<char, int>::value_type map_value_type;

std::unordered_map <char, int> vowels {
    {'a', 1},
    {'e', 2},
    {'i', 3},
    {'o', 4},
    {'u', 5}
};

std::string encode(const std::string &str)
{
    std::string res = str;
    for (auto it = res.begin(); it != res.end(); ++it)
    {
	auto jt = vowels.find(*it);
	if (jt != vowels.end())
	{
	    std::string s = std::to_string(jt->second);
	    *it = char(s[0]);
	}
    }
    return res;
}

std::string decode(const std::string &str)
{
    std::string res = str;
    for (size_t i = 0; i<res.size(); ++i)
    {
	if (isdigit(res[i]))
	{
	    auto jt = std::find_if(vowels.begin(), vowels.end(),
				[&](map_value_type str) {
				return str.second == stoi(std::string(1,res[i])); });

	    if (jt != vowels.end())
	    {
		res[i] = jt->first;
	    }
	}
    }
    return res;
}

int main(int argc, char* argv[])
{

    for (std::string str; std::getline(std::cin, str);)
    {
//	std::cout << encode(str) << "\n";
	std::cout << decode(str) << "\n";
    }

    exit(EXIT_SUCCESS);
}
