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
  tc{
    int n;cin>>n;
    vector<string> mapa(n);
    forn(i,n)cin>>mapa[i];
    if(n<3)d("YES");
    else{
      fa(x);
      int i=0;
      while(i<n-2){
        if(mapa[i][i]=='#'){
          int j=i+2,q=i+2;
          while(j<n){if(mapa[j][i]=='#'){x=true;break;}j++;}
          while(q<n){if(mapa[i][q]=='#'){x=true;break;}q++;}
        }
        i++;
        if(x)break;
      }
      if(!x){
      int p=n-2;
      fa(y);
      fa(u);
      if(mapa[p][1]=='#')u=true;
      if(mapa[p][0]=='#')y=true;
      int lk=2;
      while(lk<n-2){if(mapa[p][lk]=='#')if(y){x=true;break;}else y=true;lk++;}
      if(y||u){if(mapa[n-2][n-2]=='#'||mapa[n-2][n-1]=='#')x=true;}
      if(!x){
              int p=n-1;
      fa(y);
      fa(u);
      if(mapa[p][1]=='#')u=true;
      if(mapa[p][0]=='#')y=true;
      int lk=2;
      while(lk<n-2){if(mapa[p][lk]=='#')if(y){x=true;break;}else y=true;lk++;}
      if(y||u){if(mapa[n-1][n-2]=='#'||mapa[n-1][n-1]=='#')x=true;}
      if(!x){
      int p=n-2;
      fa(y);
      fa(u);
      if(mapa[1][p]=='#')u=true;
      if(mapa[0][p]=='#')y=true;
      int lk=2;
      while(lk<n-2){if(mapa[lk][p]=='#')if(y){x=true;break;}else y=true;lk++;}
      if(y||u){if(mapa[n-2][n-2]=='#'||mapa[n-1][n-2]=='#')x=true;}
      if(!x){
      int p=n-1;
      fa(y);
      fa(u);
      if(mapa[1][p]=='#')u=true;
      if(mapa[0][p]=='#')y=true;
      int lk=2;
      while(lk<n-2){if(mapa[lk][p]=='#')if(y){x=true;break;}else y=true;lk++;}
      if(y||u){if(mapa[n-2][n-1]=='#'||mapa[n-1][n-1]=='#')x=true;}
      }}}}
      if(x)d("NO");
      else d("YES");
    }
  }
}
