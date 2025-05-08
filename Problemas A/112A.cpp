#include <iostream>
#include <string>
#include <cctype>
using namespace std;

//Dizque runtime error mera mierda
int main(){
  string a,b;
  cin>>a>>b;
  int len = a.size();
  for(int i=0;i<len;++i){
    a[i] = tolower(a[i]);
    b[i] = tolower(b[i]); 
  }
  int respuesta = 0;
  for(int i=0;i<len;++i){
    if(a[i]>b[i]){
      respuesta = 1;
      break;
    }else if(a[i]<b[i]){
      respuesta = -1;
      break;
    }
  }
  cout<<respuesta;
  return 0;
}