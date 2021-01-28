#include <cstring>
#include <iostream>
#include <ctype.h>

using namespace std;
void to_camel_case(string text){
	string str1 = "-";
	string str2 = "_";
	for(int i=0;i<text.size();++i){
		if(str1==string(1,text[i])||str2==string(1,text[i])){
			text.erase(text.begin()+i);
			text[i]=toupper(text[i]);
		}
	}
	cout<<text<<endl;

}


int main(){
	string test	= "the-stealth-warrior";
	to_camel_case(test);
	return 0;
}
