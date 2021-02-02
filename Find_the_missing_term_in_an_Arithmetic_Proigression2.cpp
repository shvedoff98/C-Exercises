#include <iostream>
#include <vector>
using namespace std;

static long findMissing(vector<long>list)
{
	signed int result;
	signed int temp;
	signed int difference = list[1]-list[0];
	for(int i=1;i<list.size();++i)
	{
		temp = list[i+1]-list[i];
		if(temp > difference || temp < difference)
		{
			result = list[i] + (temp - difference);
			list.insert(list.begin()+i , result);
			break;
		}
	}
		cout<<result<<endl;
	return result;
}
int main(){
	vector<long>test = {-5,-6,-7,-9,-10};
	findMissing(test);
	return 0;
}
