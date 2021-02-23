#include <iostream>
#include <cstring>
#include <vector>
#include <string>
#include <unordered_map>
#include <map>
using namespace std;


string rot13(string msg){
    
    /*MAKE THE FIRTS MAP CONTAINER WITH KEY AS INT*/
    map<int,char> mymap;
    int x = 0;char character;
    for(character = 'A';character <= 'Z';character++)
    {
        //mymap[++x] = character;
        //mymap.emplace(++x, character);
        //auto temp = make_pair(++x, character);
        // mymap.insert(temp);
        mymap.emplace(make_pair(++x,character));
    }

    //for(auto& x: mymap)
   // {
   //     cout<<x.first << " : " << x.second << endl;
    //}
   // cout << endl;


    //----------------------------------------------//

    /*MAKE THE SECOND MAP CONTAINER WITH THE KEY AS CHAR */

    map <char,int> mymap2;
    x = 0; character = 'A';
    for(character = 'A';character <= 'Z';character++)
    {
        mymap2.emplace(make_pair(tolower(character),++x));
        int temp_2 = x;
        mymap2.emplace(make_pair(character,temp_2));
    }
   // for(auto& x: mymap2)
    //{
   //     cout<<x.first << " : " << x.second << endl;
   // }
   // cout << endl;


    //----------------------------------------------//

    /*IMPLEMENT ALGORITHM*/
    
    string result;

    for(auto i=0;i<msg.size();++i)
    {   
        string str1 = "!";
        string str2 = "?";
        string str3 = " ";
        if(str1 == string(1,msg[i])){
            result +=str1;
            continue;
        }
        if(str2 == string(1,msg[i])){ 
            result +=str2;
            continue;
        }
        if(str3 == string(1,msg[i])){ 
            result +=str3;
            continue;
        }
       // if(str2 == string(1,msg[i])) result +=str2;
       // if(str2 == string(1,msg[i])) result +=str2;
        map<char,int>::iterator it;
        it = mymap2.find(msg[i]);
       // if(it == mymap2.end()){
       //     cout <<"Key-value pair not present in map";
       // } else {
       //     cout << "Key-value pair present : "
       //         << it->first << "->" << it->second ;
       // }
       // cout<<endl;
        int KEY_NEW = ( it->second + 13 );
        if( KEY_NEW > 26 ) KEY_NEW -= 26; 
        map<int,char>::iterator it_2;
        it_2 = mymap.find( KEY_NEW );
        if( islower( msg[i] ) ) {
            result += tolower(it_2->second);
        } else {
            result += it_2->second;
        }

    }
    cout << result << endl;
    return result;
}




int main(){
    rot13("Ab!C d");
    return 0;
}
