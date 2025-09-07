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
  int n,m;
  cin>>n>>m;
  vi nums;
  forn(i,m){
    int a;
    cin>>a;
    nums.pb(a);
  }
  sort(all(nums));
  int resta = 100000;
  if(n==m){
    resta = nums[m-1]-nums[0];
  }else{
  for(int i=0;i<=m-n;++i){
    int a = nums[i];
    int b = nums[i+n-1];
    resta = min(resta,b-a);
  }
  }
  cout<<resta<<el;
  return 0;
}

