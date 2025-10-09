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
  ll w,x,y,z;
  cin>>w>>x>>y>>z;
  ll a = 0;
  ll b = 0;
  ll c = 0;
  if(w>=x&&w>=y&&w>=z){
      a = abs(w - y);
      b = abs(w - x);
      c = abs(w - z);
  }else if(x>=y&&x>=z){
      a = abs(x - y);
      b = abs(x - z);
      c = abs(x - w);
  }else if(y>=z){
      a = abs(y - z);
      b = abs(y - x);
      c = abs(y - w);
  }else{
      a = abs(z - y);
      b = abs(z - x);
      c = abs(z - w);
  }
  cout<<a<<el;
  cout<<b<<el;
  cout<<c<<el;
  return 0;
}
