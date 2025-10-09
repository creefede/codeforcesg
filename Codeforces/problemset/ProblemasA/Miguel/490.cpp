#include <bits/stdc++.h>

#define fi first
#define se second
#define forn(i,n) for(int i=0;i< (int)n; ++i)
#define foraut(p,m) for(auto &p : m)
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
typedef unordered_map<int,int> umi;
typedef unordered_map<char,int> umc;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int n;cin>>n;
  int i=0;
  //umi apa;
  vi uno;
  vi dos;
  vi tre;
  while(i<n){
    int a; cin>>a;
    if(a==1){uno.pb(i);}
    else if(a==2){dos.pb(i);}
    else if(a==3){tre.pb(i);}
    i++;
  }
  /*
  int minap=INT_MAX;
  foraut(p,apa){
    minap = min(minap,p.se);
  }
*/int minap= min(min(uno.size(), dos.size()),tre.size());
  int j=0;
  if(minap==0){cout<<0;}
  else{
    cout<<minap<<el;
  while(j<minap){
    cout<<uno[j]+1<<' '<<dos[j]+1<<' '<<tre[j]+1<<el;
    j++;
  }
  }
}
