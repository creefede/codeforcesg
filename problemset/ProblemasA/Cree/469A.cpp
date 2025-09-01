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
  int n,p,q;
  cin>>n>>p;
  vi nums;
  forn(i,p){
    int a;
    cin>>a;
    nums.pb(a);
  }
  cin>>q;
  forn(i,q){
    int a;
    cin>>a;
    nums.pb(a);
  }
  sort(all(nums));
  int count = 1;
  forn(i,sz(nums)){
    if(nums[i]==count){
      count++;
      continue; 
    }
  }
  if(count-1==n){
    cout<<"I become the guy."<<el;
  }else{
    cout<<"Oh, my keyboard!"<<el;
  }
  return 0;
}

