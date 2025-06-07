#include <bits/stdc++.h>

#define fi first
#define se second
#define pb push_back
#define el '\n'

using namespace std;

typedef long long ll;
typedef double ld;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<ld> vd;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  string s;
  cin>>s;
  string hola = "";
  int h = 0;
  int e = 0;
  int l1 = 0;
  int l2 = 0;
  int o = 0;
  for(int i=0;i<s.size();++i){
    if(s[i]=='h'){
      hola.pb('h');
      h = i;
      break;
    }
  }
  for(int i=h+1;i<s.size();++i){
    if(s[i]=='e'){
      hola.pb('e');
      e = i;
      break;
    }
  }
  for(int i=e+1;i<s.size();++i){
    if(s[i]=='l'){
      hola.pb('l');
      l1 = i;
      break;
    }
  }
  for(int i=l1+1;i<s.size();++i){
    if(s[i]=='l'){
      hola.pb('l');
      l2 = i;
      break;
    }
  }
  for(int i=l2+1;i<s.size();++i){
    if(s[i]=='o'){
      hola.pb('o');
      o = i;
      break;
    }
  }
  if(hola=="hello"){
    cout<<"YES"<<el;
  }else{
    cout<<"NO"<<el;
  }
  return 0;
}

