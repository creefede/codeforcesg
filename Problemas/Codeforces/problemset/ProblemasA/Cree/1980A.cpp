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

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  tc{
    int n,m;
    cin>>n>>m;
    umi hola;
    string s;
    cin>>s;
    int count =0;
    bool a=false,b=false,c=false,d=false,e=false,f=false,g=false;
    forn(i,n){
      hola[s[i]] = hola[s[i]]+1;
      if(s[i]=='A')a=true;
      if(s[i]=='B')b=true;
      if(s[i]=='C')c=true;
      if(s[i]=='D')d=true;
      if(s[i]=='E')e=true;
      if(s[i]=='F')f=true;
      if(s[i]=='G')g=true;
    }
    if(!a){
      count+=m;
    }
    if(!b){
      count+=m;
    }
    if(!c){
      count+=m;
    }
    if(!d){
      count+=m;
    }
    if(!e){
      count+=m;
    }
    if(!f){
      count+=m;
    }
    if(!g){
      count+=m;
    }
    for(const auto& pair: hola){
      if(pair.se<m){
        count+=m-pair.se;
      }
    }
    d(count);
  }
  return 0;
}