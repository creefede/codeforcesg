#include <iostream>
using namespace std;

int main(){
  int k,n,w;
  cin>>k>>n>>w;
  int precio = w*(w+1)*k/2;
  if(n>=precio){
    cout<<"0";
  }else{
    int money = precio - n;
    cout<<money;
  }
  return 0;
}