#include <iostream>
#include <vector>
using namespace std;

void tribonacci(vector<int> signature, int n){
	vector<int> result;
	for(int i=0;i<signature.size();++i){
		result.push_back(signature[i]);
	}
	for(int i=0;i<n;++i){
		int j;
		int sum = 0;
		for(j=0;j<signature.size();++j){
			sum += signature[j];
		}
		/*cout<<sum<<endl;*/result.push_back(sum);
		signature.push_back(sum);signature.erase(signature.begin());
	}
	if(n == 2){
		signature.pop_back();
		for(int i=0;i<signature.size();++i)
			cout<<result[i]<<" ";
	}
	if(n == 1){
		signature.pop_back();signature.pop_back();
		for(int i=0;i<signature.size();++i)
			cout<<signature[i];
	}
	if(n == 0){
		vector<int> result = {};
	}
	if(n >=3){
		
		for(int i=0;i<result.size()-3;++i)
			cout<<result[i]<<" ";
		cout<<endl;
	}
}
		


int main(){
	vector<int> test_signature = {1,1,1};
	int n;
	cout<<"Enter the number of elements: "<<endl;
	cin>>n;
	tribonacci(test_signature,n);
	return 0;
}

