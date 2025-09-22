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
  int n; cin>>n;
  while(n--){
    ll x, y;
    cin>>x>>y;
    if(x==y){cout<<"-1"<<el;}
    else if(x<y){
        cout<<"2"<<el;
    }else{
        if(y==1){cout<<"-1"<<el;}
        else if(x-1>y){cout<<"3"<<el;}
        else{cout<<"-1"<<el;}
    }
  }
  return 0;
}
