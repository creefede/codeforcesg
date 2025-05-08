#include <iostream>
using namespace std;

int main(){
  int x;
  cin>>x;
  int count = 0;
  int pos = 0;
  while(pos<x){
    pos = pos+5;
    count++;
  }
  cout<<count;
  return 0;
}