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
  int n,d;
  vi nums;
  cin>>n>>d;
  forn(i,n){
    int a;
    cin>>a;
    nums.pb(a);
  }
  int count = 0;
  forn(i,n){
    for(int j=i+1;j<n;++j){
      if(abs(nums[i]-nums[j])<=d){
        count += 2;
      }
    }
  }
  cout<<count<<el;
  return 0;
}

