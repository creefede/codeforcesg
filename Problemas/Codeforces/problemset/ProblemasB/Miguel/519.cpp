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
const int nax = 1e5+200;
const ld pi = acos(-1);

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int n;cin>>n;
  vi ini(n);
  vi pri(n);
  pri[n-1]=INT_MAX;
  vi sec(n);
  sec[n-1]=INT_MAX;
  sec[n-2]=INT_MAX;
  forn(i,n)cin>>ini[i];
  forn(i,n-1)cin>>pri[i];
  forn(i,n-2)cin>>sec[i];
  sort(all(ini));
  sort(all(pri));
  sort(all(sec));
  forn(p,n){if(ini[p]!=pri[p]){d(ini[p]);break;}}
  forn(p,n){if(sec[p]!=pri[p]){d(pri[p]);break;}}
}
