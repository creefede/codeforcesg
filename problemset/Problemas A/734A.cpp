#include <bits/stdc++.h>

#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;
typedef double ld;
typedef vector<int> vi;

int main(){
  int n;
  cin>>n;
  string s;
  cin>>s;
  int ant=0;
  int danik = 0;
  ;
  for(int i=0;i<n;++i){
    if(s[i]=='A'){
      ant++;
    }else{
      danik++;
    }
  }
  if(ant>danik){
    cout<<"Anton\n";
  }else if(danik>ant){
    cout<<"Danik\n";
  }else{
    cout<<"Friendship";
  }
  return 0;
}