#include <bits/stdc++.h>

#define fi first
#define se second
#define forn(i,n) for(int i=0;i< (int)n; ++i)
#define pb push_back
#define el '\n'
#define sz(v) int(v.size())
#define all(v) v.begin(),v.end()

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

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int n;
  cin>>n;
  string s;
  cin>>s;
  unordered_map<string,int> hola;
  forn(i,sz(s)-1){
    string a = "";
    a.pb(s[i]);
    a.pb(s[i+1]);
    hola[a] = hola[a] + 1;
  }
  int count = 0;
  string nuevo1 = "";
  for(const auto& pair : hola){
      if(pair.se>count){
        nuevo1 = pair.fi;
        count = pair.se;
      }
  }
  cout<<nuevo1<<el;
  return 0;
}

