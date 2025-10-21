#include <bits/stdc++.h>
#define fi first
#define se second
using namespace std;

int main(){
  string s;
  cin>>s;
  int upper = 0;
  int lower = 0;
  int len = s.size();
  for(int i = 0;i<len;++i){
    if(isupper(s[i])){
      upper++;
    }else{
      lower++;
    }
  }
  if(upper>lower){
    for(int i=0;i<len;++i){
      s[i] = toupper(s[i]);
    }
  }else{
    for(int i=0;i<len;++i){
      s[i]= tolower(s[i]);
    }
  }
  cout<<s;
  return 0;
}