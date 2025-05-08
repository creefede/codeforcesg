#include <iostream>
#include <vector>
using namespace std;

int main(){
  int n,k;
  cin>>n>>k;
  int count = 0;
  vector<int> hola(n);
  for(int i=0;i<n;++i){
    int a;
    cin>>a;
    hola[i] = a;
  }
  for(int i=0;i<n;++i){
    if(hola[i]>=hola[k-1]&&hola[i]>0){
      count++;
    }
  }
  cout<<count;
  return 0;
}