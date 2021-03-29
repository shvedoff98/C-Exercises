#include <vector>
#include <iostream>
using namespace std;
unsigned long long sum = 0;
void multiplyPrime(vector<int>test,int num){
	sum+=test[0];
	for(int i=1;i<num;++i){
		sum*=test[i];
	}
	cout<<sum<<endl;
}
void numPrimorial (unsigned short number){
  vector<int>prime;
  int count = 0;
  for(int i=2;i<30;++i){//65535
    for(int j=2;j<i;++j){
      if(i%j==0)count++;}
    if(count==0)prime.push_back(i);count = 0;
  }
  multiplyPrime(prime,number);
}


int main(){
	numPrimorial(9);
	return 0;
}
