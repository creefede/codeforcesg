#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main(){
  string name;
  cin>>name;
  unordered_map<char,int> hola;
  for(int i=0;i<name.size();++i){
    hola[name[i]] = hola[name[i]] + 1;
  }
  int count = 0;
  for(const auto& pair : hola){
    if(pair.second>=1){
      count++;
    }
  }
  if(count%2==0){
    cout<<"CHAT WITH HER!";
  }else{
    cout<<"IGNORE HIM!";
  }
  return 0;
}
