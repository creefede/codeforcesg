#include <iostream>
#include <vector>

using namespace std;

int main(){
  int moves = 0;
  vector<vector<int>> hola(5);
  for(int i=0;i<5;++i){
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    hola[i].push_back(a);
    hola[i].push_back(b);
    hola[i].push_back(c);
    hola[i].push_back(d);
    hola[i].push_back(e);
  }
  for(int i=0;i<5;++i){
    for(int j=0;j<5;++j){
      if(hola[i][j]==1){
        moves = abs(i-2) + abs(j-2);
      }
    }
  }
  cout<<moves;
  return 0;
}