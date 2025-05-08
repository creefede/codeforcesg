#include <bits/stdc++.h>

#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;
typedef double ld;
typedef vector<int> vi;

int main(){
  ll n;
  cin>>n;
  string s = to_string(n);
  unordered_map<char,int> hola;
  for(int i=0;i<s.size();++i){
    hola[s[i]] = hola[s[i]] + 1;
  }
  int count = 0;

  for(auto const& pair : hola){
    if(pair.fi!='7'||pair.fi!='4'){
      cout<<"NO\n";
      break;
    }
    count++;
  }
  if(count==4||count==7){
    cout<<"YES\n";
  }
  return 0;
}