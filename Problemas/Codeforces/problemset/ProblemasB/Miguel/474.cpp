#include <bits/stdc++.h>

#define fi first
#define se second
#define forn(i,n) for(int i=0;i< (int)n; ++i)
#define fore(i,l,r) for(int i=(int)l; i<= (int)r; ++i)
#define ford(i,n) for(int i=(int)(n) - 1; i>= 0; --i)
#define foraut(p,m) for(auto &p : m)
#define forc(c,s) for(char c: s)
#define pb push_back
#define el '\n'
#define sz(v) int(v.size())
#define all(v) v.begin(),v.end()
#define tc int t; cin >> t; while(t--)
#define fa(x) bool x=false
#define d(x) cout << (x) << el
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
typedef unordered_map<string,int> ums;

const int inf = 1e9;

int solve(vi &arr, ll q, int n){
    int ans=lower_bound(all(arr),q)-arr.begin();
    return ans;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int n;cin>>n;
  vi pile(n);
  int i=1;
  cin>>pile[0];
  while(i<n){ll a; cin>>a;pile[i]=pile[i-1]+a;i++;}
  int m;cin>>m;
  forn(j,m){
    ll q;cin>>q;
    d(solve(pile,q,n)+1);
  }
}