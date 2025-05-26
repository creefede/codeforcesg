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
  ll t;
  cin>>t;
  for(int i=0;i<t;++i){
    ll len;
    cin>>len;
    vi nums(len);
    for(int j=0;j<len;++j){
      int a;
      cin>>a;
      nums.pb(a);
    }
    vector<vector<int>> hola;
    for(int k=0;k<len;++k){
      if(nums[k]+1>=nums[k+1]){
        hola[k].pb(nums[k]);
      }
    }
    int ans = hola.size();
    cout<<ans<<el;
  }
  return 0;
}
