#include <iostream>
#include <cstring>
#include <ctype.h>

using namespace std;

string duplicate_encoder(const string& word){
    string str_new;
    string word1;
    int len = word.size();
    for(int j=0;j<len;j++)
    word1[j]=tolower(word[j]);



    for(int i=0;i<len;i++){
        int count = 0;
        for(int j=0;j<len;j++){
            if(word1[j] == word1[i]){
                count++;
            }
        }
        cout<<count<<endl;
        if(count >=2){
            str_new += ')';
        } else {
            str_new += '(';
        }
        count = 0;
    }
    cout<<str_new<<endl;
    return str_new;
}
