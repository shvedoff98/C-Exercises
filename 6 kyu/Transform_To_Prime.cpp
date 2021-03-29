#include <vector>
#include <iostream>

using namespace std; 

int minimumNumber (vector <int> numbers ){
  int sum_list= 0;
  int count = 0;
  bool flag = true;
  int sum_list_not_changed;
  int result;
  for(size_t i=0;i<numbers.size();++i)sum_list+=numbers[i];
  sum_list_not_changed = sum_list;
  
  while(flag){
    for(int z=2;z<sum_list;++z){
      if(sum_list%z==0){
        count++;
      }
    }
    if(count==0){
      flag = false;
      break;
    }else{
      sum_list+=1;
      count = 0;
    }
  }
  result = sum_list - sum_list_not_changed;
  return result;

}
