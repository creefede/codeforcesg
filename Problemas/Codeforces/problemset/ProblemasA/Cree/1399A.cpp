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
  int t;
  cin>>t;
  forn(z,t){
    int n;
    cin>>n;
    vi a;
    forn(i,n){
      int b;
      cin>>b;
      a.pb(b);
    }
    sort(all(a));
    int i = 0;
    while(n>1){
      if(abs(a[i]-a[i+1])<=1){
        a.erase(a.begin()+i);
        i = 0;
      }else{
        i++;
      }
      n--;
    }
    if(sz(a)<=1){
      cout<<"YES"<<el;
    }else{
      cout<<"NO"<<el;
    }
  }
  return 0;
}

