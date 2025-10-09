#include <bits/stdc++.h>

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
  int n,m;
  cin>>n>>m;
  vi nums;
  for(int i=0;i<n;++i){
    int a;
    cin>>a;
    nums.pb(a);
  }
  sort(nums.begin(),nums.end());
  int count = 0;
  for(int i=0;i<m;++i){
    if(nums[i]<0){
      count += nums[i];
    }
  }
  cout<<abs(count)<<el;
  return 0;
}

