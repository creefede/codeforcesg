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
  forn(z,t){
    int n;
    cin>>n;
    ll count = 0;
    forn(i,n){
      int b;
      cin>>b;
      count+=b;
    }
    ll l = 1;
    ll r = count+1;
    while(1+l<r){
      ll mid = (l+r)/2;
      if(mid>count/mid){
        r = mid;
      }else{
        l = mid;
      }
    }
    if(l*l==count){
      cout<<"YES"<<el;
    }else{
      cout<<"NO"<<el;
    }
  }
  return 0;
}

