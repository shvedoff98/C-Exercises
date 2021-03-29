#include <iostream>
#include <string>
#include <map>
#include <cstring>
using namespace std;

string rot13(string msg){
    
    /*MAKE THE FIRTS MAP CONTAINER WITH KEY AS INT*/
    map<int,char> mymap;
    int x = 0;char character;
    for(character = 'A';character <= 'Z';character++)
    {
        mymap.emplace(make_pair(++x,character));
    }

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

    //----------------------------------------------//

    /*IMPLEMENT ALGORITHM*/
    
    string result;
    for(auto i=0;i<msg.size();++i)
    {
        string str1 = "!";string str2 = "?";string str3 = " ";string str4 = ".";
        string str5 = ",";string str6 = "1";string str7 = "2";string str8 = "3";
        string str9 = "4";string str10 = "5";string str11 = "6";string str12 = "7";
        string str13 = "8";string str14 = "9";string str15 = "0";string str16 = "+";
        string str17 = "-";string str18 = "=";
        if(str1 == string(1,msg[i])){result +=str1;continue;}
        if(str2 == string(1,msg[i])){result +=str2;continue;}
        if(str3 == string(1,msg[i])){result +=str3;continue;}
        if(str4 == string(1,msg[i])){result +=str4;continue;}
        if(str5 == string(1,msg[i])){result +=str5;continue;}
        if(str6 == string(1,msg[i])){result +=str6;continue;}
        if(str7 == string(1,msg[i])){result +=str7;continue;}
        if(str8 == string(1,msg[i])){result +=str8;continue;}
        if(str9 == string(1,msg[i])){result +=str9;continue;}
        if(str10 == string(1,msg[i])){result +=str10;continue;}
        if(str11 == string(1,msg[i])){result +=str11;continue;}
        if(str12 == string(1,msg[i])){result +=str12;continue;}
        if(str13 == string(1,msg[i])){result +=str13;continue;}
        if(str14 == string(1,msg[i])){result +=str14;continue;}
        if(str15 == string(1,msg[i])){result +=str15;continue;}
        if(str16 == string(1,msg[i])){result +=str16;continue;}
        if(str17 == string(1,msg[i])){result +=str17;continue;}
        if(str18 == string(1,msg[i])){result +=str18;continue;}
        map<char,int>::iterator it; it = mymap2.find(msg[i]);
        int KEY_NEW = ( it->second + 13 ); if( KEY_NEW > 26 ) KEY_NEW -= 26; 
        map<int,char>::iterator it_2; it_2 = mymap.find( KEY_NEW );
        if( islower( msg[i] ) ){ 
            result += tolower(it_2->second);
        } else {
            result += it_2->second;
        }

    }
    return result;
}


int main(){
    rot13("Ab!C d");
    return 0;
}
