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
  int n,m;cin>>n>>m;
  bool ans=false;
  if(n==2&&m==3)ans=true;
  else if(n==3&&m==5)ans=true;
  else if(n==5&&m==7)ans=true;
  else if(n==7&&m==11)ans=true;
  else if(n==11&&m==13)ans=true;
  else if(n==13&&m==17)ans=true;
  else if(n==17&&m==19)ans=true;
  else if(n==19&&m==23)ans=true;
  else if(n==23&&m==29)ans=true;
  else if(n==29&&m==31)ans=true;
  else if(n==31&&m==37)ans=true;
  else if(n==37&&m==41)ans=true;
  else if(n==41&&m==43)ans=true;
  else if(n==43&&m==47)ans=true;
  if(ans==true){msg("YES");}
  else{msg("NO");}
}
