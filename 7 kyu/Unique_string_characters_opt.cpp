#include <iostream>
#include "utility.h"
#include <algorithm>
#include <string>
#include <unordered_set>

using namespace utility;


std::string solve (std::string a, std::string b)
{
    std::string final_res;
    std::unordered_set <char> set_A { a.begin(), a.end() };
    std::unordered_set <char> set_B { b.begin(), b.end() };
    print (set_A);
    print (set_B);

    for ( auto item : a )
    {
	if (set_B.find(item) == set_B.end())
	    final_res.append(1, item);
    }

    for ( auto item : b )
    {
	if (set_A.find(item) == set_A.end())
	    final_res.append(1, item);
    }

    return final_res;
}

int main(int argc, char* argv[])
{
//    for(std::string s, t; std::cin >> s >> t; )
 //   {
	std::cout << solve ("xyabxfdsadvsdvsdvsdfvsdfvb",
	"xzcaasdfasdfasdfasdfsdfasdfasdf") << "\n";
   // }
}
