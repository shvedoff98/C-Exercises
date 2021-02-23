#include <string>

std::string rot13(std::string msg)
{
  for(auto& x : msg) 
    if (islower(x)) x = 'a'+(x-'a'+13)%26; 
    else if(isupper(x)) x = 'A'+(x-'A'+13)%26;
  return msg;
}

int main(){
    rot13("Te!056.ST");
    return 0;
}
