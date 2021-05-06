#include <string>
#include <iostream>
#include <algorithm>
#include <cctype>
#include <iostream>

std::string swap(std::string s, int n) 
{
	std::string str ,res;
	int j = 0;
	auto to_bin = [&] (int n) 
	{ 
		while (n > 0)
		{
			str += std::to_string(n % 2);
			n  /= 2;
		} 
	};
	to_bin(n); std::reverse(str.begin(), str.end());
	std::cout << str << "\n";
	
	for (int i=0; i<s.size(); ++i)
	{
		
		if (isalpha(s[i])) 
		{
			if (islower(s[i]) && str[j] == '1' ) res +=  toupper(s[i]) ;  
			else if (isupper(s[i]) && str[j] == '1') res += tolower(s[i]);
			else res += s[i]; 
			if (j == str.size()-1) { j =0; continue; }
			++j;
		} 
		else if (s[i] == ' ') res += ' ';
	}
	
	return res;
}