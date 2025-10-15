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
  string s;
  cin>>s;
  forn(i,sz(s)-2){
    if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'){
      s[i] = '*';
      s[i+1] = '*';
      s[i+2] = '*';
    }
  }
  string nueva = "";
  bool dentro = false;
  forn(i,sz(s)){
    if(s[i]=='*'){
      if(dentro){
        nueva += ' ';
        dentro = false;
      }
    }else{
      nueva += s[i];
      dentro = true;
    }
  }
  msg(nueva);
  return 0;
}