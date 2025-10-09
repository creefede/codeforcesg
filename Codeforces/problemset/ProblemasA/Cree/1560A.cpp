#include <bits/stdc++.h>

#define fi first
#define se second
#define forn(i,n) for(int i=0;i< (int)n; ++i)
#define pb push_back
#define el '\n'

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
    int k;
    cin>>k;
    vi nums;
    for(int j=1;j<100000;++j){
      string hola = to_string(j);
      if(j%3==0||hola.back()=='3'){
        continue;
      }else{
        nums.pb(j);
      }
    }
    cout<<nums[k-1]<<el;
  }
  return 0;
}

