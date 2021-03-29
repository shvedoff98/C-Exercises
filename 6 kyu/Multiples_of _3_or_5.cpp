#include <iostream>
using namespace std;

int solution(int number){
  int sum = 0;
  for(int i=0;i<number;++i){
    cout<<sum;
    if(i%3==0 || i%5==0){
      sum += i;
    }
  }
  return sum;
}
