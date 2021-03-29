#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
vector<string>solution(const string &s){
	vector<string>result;
	string temp;
	for(int i=0;i<s.size();++i){
		temp += s[i];
		if(temp.size()==2){
			result.push_back(temp);
			temp = "";
		}
	}

	if(s.size()%2!=0){
		temp += "_";
		result.push_back(temp);
	}

	for(int i=0;i<result.size();++i){
		cout<<result[i]<<" ";
	}
	cout<<endl;
	return result;
}

int main(){
	const string str = "HelloWorld";
	solution(str);

	return 0;
}
