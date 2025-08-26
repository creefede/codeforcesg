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
  int s,n;
  cin>>s>>n;
  vector<pair<int,int>> hola;
  for(int i=0;i<n;++i){
    int x,y;
    cin>>x>>y;
    hola.pb({x,y});
  }
  sort(hola.begin(),hola.end());
  for(auto& pair : hola){
    if(s>pair.first){
      s += pair.second;
    }else{
      cout<<"NO"<<el;
      return 0;
    }
  }
  cout<<"YES"<<el;
  return 0;
}