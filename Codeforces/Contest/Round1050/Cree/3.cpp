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
  int t;
  cin>>t;
  forn(i,t){
    ll n,m;
    cin>>n>>m;
    unordered_map<ll,int> hola;
    forn(j,n){
      ll a,b;
      cin>>a>>b;
      if(b==0){
        b=2;
      }
      hola[a] = b;
    }
    ll puntos = -1;
    bool uno = false;
    for(ll j=0;j<=m-1;++j){
      if(hola[j]==0&&hola[j+1]==0){
        puntos += 2;
      }else if(hola[j]==2&&!uno){
        continue;
      }else if(hola[j]==2&&uno){
        uno = false;
        puntos++;
      }else if(hola[j]==1&&!uno){
        puntos++;
        uno = true;
      }else if(hola[j]==1&&uno){
        continue;
      }
    }
    cout<<puntos<<el;
  }
  return 0;
}

