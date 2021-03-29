#include <iostream>

using namespace std;

void halving_sum(unsigned n){
	int p = n;
	unsigned int count = 0;
	int sum = 0;
	sum +=n;
	while(p>=1){
		p /= 2;
		count++;
	}
  
	for(int i=0;i<count;++i){
		n/=2;
		sum+=n;
	}
	cout<<sum<<endl;
}
int main(){
	halving_sum(127);
	return 0;
}
