#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void deleteNth(vector<int> arr, int n){
	int number;
	vector<int>result;
	for(int i=0;i<arr.size();i++){
		number = count(result.begin(),result.end(),arr[i]);
		if(number<n){
			result.push_back(arr[i]);
		}
	}

	for(int i=0;i<result.size();++i){
		cout<<result[i]<<" ";
	}
	cout<<endl;
}

int main(){
	vector<int>test = {1,1,3,3,7,2,2,2,2};
	deleteNth(test,3);
	return 0;
}
