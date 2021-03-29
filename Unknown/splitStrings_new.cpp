#include <vector>
#include <iostream>
#include <cstring>
using namespace std;
vector<string>solution(const string &s){
	vector<string>res;
	for(int i=0;i<s.size();i+=2) res.push_back(s.substr(i,2));
	if (s.size() % 2) res[res.size() - 1] += "_";
	return res;
}
int main(){

	const string str = "akfkgdfgndkf";
	solution(str);
	return 0;

}
