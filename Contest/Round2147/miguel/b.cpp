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
  int t; cin>>t;
  while(t--){
    ll n; cin>>n;
    ll i=n;
    vll nums;
    while(i>0){
        nums.pb(i);
        i--;
    }nums.pb(n);
    int j=1;
    while(j<n){
        nums.pb(j);
        j++;
    }
    int k=0;
    while(k<2*n){
        cout<<nums[k]<<' ';
        k++;
    }
    cout<<el;
  }
}
