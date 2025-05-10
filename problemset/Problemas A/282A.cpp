#include <iostream>
#include <string>
using namespace std;

int main(){
  int n;
  cin>>n;
  int count = 0;
  for(int i=0;i<n;++i){
    string valor;
    cin>>valor;
    for(int j=0;j<3;++j){
      if(valor[j]=='+'){
        count++;
        break;
      }else if(valor[j]=='-'){
        count--;
        break;
      }
    }
  }
  cout<<count;
  return 0;
}
