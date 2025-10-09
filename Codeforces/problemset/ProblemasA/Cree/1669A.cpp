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
    int rat;
    cin>>rat;
    if(rat>=1900){
      cout<<"Division 1"<<el;
      continue;
    }
    if(rat>=1600&&rat<=1899){
      cout<<"Division 2"<<el;
      continue;
    }
    if(rat>=1400&&rat<=1599){
      cout<<"Division 3"<<el;
      continue;
    }
    cout<<"Division 4"<<el;
  }
  return 0;
}

