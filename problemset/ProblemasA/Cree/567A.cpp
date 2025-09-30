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
  vi a;
  forn(i,n){
    int b;
    cin>>b;
    a.pb(b);
  }
  forn(i,n){
    int mini;
    int maxi;
    if(i==0){
      mini = abs(a[i+1]-a[i]);
      maxi = abs(a[i]-a[sz(a)-1]);
    }else if(i!=sz(a)-1){
      int izq = abs(a[i-1]-a[i]);
      int der = abs(a[i+1]-a[i]);
      mini = min(izq,der);
      int maxiizq = abs(a[i]-a[0]);
      int maxider = abs(a[i]-a[sz(a)-1]);
      maxi = max(maxiizq,maxider);
    }else{
      mini = abs(a[i-1]-a[i]);
      maxi = abs(a[0]-a[i]);
    }
    cout<<mini<<" "<<maxi<<el;
  }
  return 0;
}

