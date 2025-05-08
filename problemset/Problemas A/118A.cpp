#include <iostream>
#include <string>
using namespace std;

int main(){
  string s;
  cin>>s;
  string nuevos;
  for(int i=0;i<s.size();++i){
    char c = tolower(s[i]);
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'|| c == 'y'){
    }else{
      nuevos.push_back('.');
      nuevos.push_back(c);
    }
  }
  cout<<nuevos;
  return 0;
}