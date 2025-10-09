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
  int n,k;
  cin>>n>>k;
  int joy = -2e9;
  forn(i,n){
    int f,t;
    cin>>f>>t;
    if(t>k){
      if(joy<f-t+k){
        joy = f-t+k;
      }
    }else{
      if(joy<f){
        joy = f;
      }
    }
  }
  cout<<joy<<el;
  return 0;
}

