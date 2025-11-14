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
  int n;
  cin>>n;
  vll a(n);
  forn(i,n)cin>>a[i];
  int k;
  cin>>k;
  sort(all(a));
  forn(_,k){
    ll l,r;
    cin>>l>>r;
    int iz = -1,der = n;
    while(iz+1<der){
      int mid = (iz+der)/2;
      if(a[mid]>=l)der=mid;
      else iz = mid;
    }
    int iz1 = -1,der1= n;
    while(iz1+1<der1){
      int mid = (iz1+der1)/2;
      if(a[mid]<=r)iz1=mid;
      else der1 = mid;
    }
    int ans = max(0,iz1-der+1);
    d(ans);
    }
  return 0;
  }


