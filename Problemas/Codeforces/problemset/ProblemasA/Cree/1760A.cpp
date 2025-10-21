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
  int t;
  cin>>t;
  for(int i=0;i<t;++i){
    int a,b,c;
    vi nums;
    cin>>a>>b>>c;
    nums.pb(a);
    nums.pb(b);
    nums.pb(c);
    sort(nums.begin(),nums.end());
    cout<<nums[1]<<el;
  }
  return 0;
}

