#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int count(vector<int>test,int integer){
	int number = 0;
	for(int i=0;i<test.size();++i){
		if(test[i]==integer){
			number++;
		}
	}
	return number;
}

vector<int> printArray(vector<int>test){
	for(int i=0;i<test.size();++i){
		cout<<test[i]<<" ";
	}
	cout<<endl;
	return test;
}

void deleteNth(vector<int> arr, int n){
	vector<int>result;
	for(int i=0;i<arr.size();i++){
		if(count(result,arr[i])<n){
			result.push_back(arr[i]);
		}
	}
	printArray(result);
}


int main(){
	vector<int>test = {20,37,20,21};
	deleteNth(test,1);
	return 0;
}

