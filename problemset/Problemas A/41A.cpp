#include <bits/stdc++.h>

#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;
typedef double ld;
typedef vector<int> vi;

int main(){
  string s,t;
  cin>>s>>t;
  int lent = t.size();
  string temp = "";
  for(int i=lent-1;i>=0;--i){
    temp.pb(t[i]);
  }
  if(temp==s){
    cout<<"YES\n";
  }else{
    cout<<"NO\n";
  }
  return 0;
}