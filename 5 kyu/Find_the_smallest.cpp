#include <iostream>
#include <cstring>
#include <vector>
#include <cstring>
using namespace std;

int add_number;
int it_from;
int it_into;
int len = 0;
vector<int>test;
vector<int>test_inOrder;
vector <long long> result;

 void coutDigits(long long n){
    int i,j;
    do{
        n%10;
        len++;
    }while(n/=10);
}

void createVector(long long n){
    int i,temp;
    for(i=0;i<len;++i){
        temp = n%10;
        test.push_back(temp);
        n/=10;
    }
    for(int i=len-1;i>=0;--i){
        auto temp2 = test[i];
        test_inOrder.push_back(temp2);
    }
}

void algorithm(void){
    for(int i=0;i<test_inOrder.size();++i){
        auto smallest = test_inOrder[i];
        it_into = i;
        for(int j=i+1;j<len;j++){
            if(test_inOrder[j]<smallest){
                smallest = test_inOrder[j];
                it_from = j;
            }
        }
        if(smallest!=test_inOrder[i]){
            test_inOrder.insert(test_inOrder.begin()+i,smallest);
            test_inOrder.erase(test_inOrder.begin()+it_from+1);
            if(test_inOrder[0]==0){
                test_inOrder.erase(test_inOrder.begin());
            }
            break;
        }
    }
}
void makeResult(void){
    string res;
    string temp;
    for(int i=0;i<test_inOrder.size();++i){
        temp = to_string(test_inOrder[i]);
        res += temp;
        temp = "";
    }
    add_number = stoi(res);
    result.push_back(add_number);
    result.push_back(it_from);
    result.push_back(it_into);

    for(auto it=result.begin();it!=result.end();++it){
        cout<<*it<<" ";
    }
    cout<<endl;
}

                






int main()
{
    coutDigits(296837);
    createVector(296837);
    algorithm();
    makeResult();
    return 0;
}
