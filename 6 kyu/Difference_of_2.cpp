#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;


vector<pair<int,int>> twos_difference(const vector<int> &vec){
  vector<pair<int,int>>result;
  vector<int> sorted_vec;
  sorted_vec = vec;
  sort(sorted_vec.begin(),sorted_vec.end());
  for(auto i=0;i<sorted_vec.size();i++){
    for(auto j=0;j<sorted_vec.size();++j){
      if(sorted_vec[i]+2==sorted_vec[j]){
        pair<int,int> p;
        p = make_pair(sorted_vec[i],sorted_vec[j]);
        result.push_back(p);
      }
    }
  }
  for(int i=0;i<result.size();++i){
    cout<<result[i].first<<result[i].second<<" ";
  }
  cout<<endl;
  return result;
}
