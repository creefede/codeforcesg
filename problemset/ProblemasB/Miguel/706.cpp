#include <bits/stdc++.h>

#define fi first
#define se second
#define forn(i,n) for(int i=0;i< (int)n; ++i)
#define pb push_back
#define el '\n'
#define sz(v) int(v.size())
#define all(v) v.begin(),v.end()

using namespace std;

typedef long long ll;
typedef double ld;
typedef pair<int,int> ii;
typedef pair<ll,ll> pll;
typedef tuple<int,int,int> iii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<ll> vll;
typedef vector<ld> vd;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int n; cin>>n;
  int i =0;
  vi nums;
  while(i<n){
    int a; cin>>a;
    nums.pb(a);
    i++;
  }
  sort(nums.begin(), nums.end());
  int q; cin>>q;
  while(q--){
    int b; cin>>b;
    int j=0;
    while(b>=nums[j]&&j<n){
        j++;
    }cout<<j<<el;
  }
  return 0;
}

// ----------------------------------------NO FUNCIONA--------------------------------------------------------------