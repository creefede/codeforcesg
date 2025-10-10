#include <bits/stdc++.h>

#define fi first
#define se second
#define forn(i,n) for(int i=0;i< (int)n; ++i)
#define foraut(p,m) for(auto &p : m)
#define pb push_back
#define el '\n'
#define sz(v) int(v.size())
#define all(v) v.begin(),v.end()
#define fa(x) bool x=false
#define msg(x) cout << (x) << el
#define bug(x) cout << (#x) << ": " << (x) << el

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
typedef unordered_map<int,int> umi;
typedef unordered_map<char,int> umc;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int n,k;
  cin>>n>>k;
  vi b;
  forn(i,n){
    int a;
    cin>>a;
    b.pb(a);
  }
  vi dp(n);
  dp[0] = 0;
  dp[1] = abs(b[0]-b[1]);
  for(int i=2;i<n;++i){
    dp[i] = 1e9;
    for(int j=1;j<=k;++j){
      if(i-j<0) break;
      dp[i] = min(dp[i],dp[i-j]+abs(b[i]-b[i-j]));
    }
  }
  msg(dp[n-1]);
  return 0;
}

