#include <iostream>
#include <vector>
using namespace std;
bool invite_more_women(const vector<int> &invited){
  unsigned int sum_1 = 0;
  unsigned int sum1 = 0;
  for(int i=0;i<invited.size();++i){
    if(invited[i]==1){
      sum1++;
    } else {
      sum_1++;
    }
  }

  if(sum_1 >= sum1){
    cout<<"false"<<endl;
    return false;
  } else {
    cout<<"true"<<endl;
    return true;
  }
}
