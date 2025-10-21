#include <bits/stdc++.h>

#define fi first
#define se second
#define forn(i,n) for(int i=0;i< (int)n; ++i)
#define foraut(p,m) for(auto &p : m)
#define forc(c,s) for(char c: s)
#define pb push_back
#define el '\n'
#define sz(v) int(v.size())
#define all(v) v.begin(),v.end()
#define tc int t; cin >> t; while(t--)
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
  int n;cin>>n;
  vi A(n);
  vi B(n);
  vi C(n);
  forn(i,n){
    int a,b,c;cin>>a>>b>>c;
    A[i]=a; B[i]=b; C[i]=c;
  }int cont=0, pos=0;
  vector<vi> dp(n,vi(3,0)); // matriz de n*3 llena de ceros
  int i=1;
  dp[0][0] = A[0]; dp[0][1] = B[0]; dp[0][2] = C[0];
  while(i<n){
    dp[i][0]=A[i]+max(dp[i-1][1],dp[i-1][2]);
    dp[i][1]=B[i]+max(dp[i-1][0],dp[i-1][2]);
    dp[i][2]=C[i]+max(dp[i-1][0],dp[i-1][1]);
    i++;
  }
  cont = max(dp[n-1][0],max(dp[n-1][1],dp[n-1][2]));
  msg(cont);
}
