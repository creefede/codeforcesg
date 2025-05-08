#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  string s;
  cin>>s;
  int len = s.size();
  vector<int> hola;
  for(int i=0;i<len;i=i+2){
    int num = s[i] - '0';
    hola.push_back(num);
  }
  sort(hola.begin(),hola.end());
  string snueva = "";
  for(int i=0;i<hola.size();++i){
    snueva += to_string(hola[i]) + '+';
  }
  snueva.pop_back();
  cout<<snueva;
  return 0;
}