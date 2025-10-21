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
  int n;
  cin>>n;
  int a =0,b=0,c=0;
  vi ab;
  vi ba;
  vi ca;
  forn(i,n){
    int z;
    cin>>z;
    if(z==1){
      a++;
      ab.pb(i);
    }else if(z==2){
      b++;
      ba.pb(i);
    }else{
      c++;
      ca.pb(i);
    }
  }
  int ans1 = min(a,b);
  int ans2 = min(ans1,c);
  msg(ans2);
  forn(i,ans2){
    cout<<ab[i]+1<<" "<<ba[i]+1<<" "<<ca[i]+1<<el;
  }
  return 0;
} 

