#include<iostream>
#include<vector>
#include<algorithm>
#define fi first
#define se second
#define pb push_back
#define el '\n'
 
using namespace std;
 
typedef long long ll;
typedef double ld;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<ld> vd;
 
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int t; cin>>t;
  while(t--){
    ll n, m, x, y;
    cin>>n>>m>>x>>y;
    ll i=0, j=0;
    vll nl(n);
    vll ml(m);
    while(i<n){
        ll q; cin>>q;
        nl[i]= q;
        i++;
    }
    while(j<m){
        ll w; cin>>w;
        ml[j]=w;
        j++;
    }
    int z=n-1, v=m-1;
    while(nl[z]>y){
        n--;
        z--;
    }
    while(ml[v]>x){
        m--;
        v--;
    }
    cout<<n+m<<endl;
  }
}
