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
  int t; cin>>t;
  vll nums(100001);
  int maxi=0;
  forn(i,t){
    int a; cin>>a;
    nums[a]++;
    maxi =max(maxi,a);
  }
  vll dp(maxi+1);
  dp[0]=0;
  dp[1]=nums[1]*1; //el valor de el numero uno es las veces que aparece por su valor ='<
  int j=2;
  while(j<=maxi){
    dp[j]=max(dp[j-1],dp[j-2]+nums[j]*j);
    j++;
  }msg(dp[maxi]);
}
