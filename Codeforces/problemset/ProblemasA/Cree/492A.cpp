#include <bits/stdc++.h>
#define int long long
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

int32_t main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int n;
  cin>>n;
  fa(hola);
  int i = 2;
  vll dp(n);
  dp[0] = 1;
  dp[1] = 3;
  while(!hola){
    dp[i] = dp[i-1] + i+1;
    i++;
    if(dp[i]>=n)break;
  }
  int count = 0;
  int counta = 0;
  for(int i = 0;i<dp.size();++i){
    count += dp[i];
    counta++;
    if(count>n){
      counta--;
      break;
    }
  }
  msg(counta);
  return 0;
}

