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
  int a, b, c, d=0;
  cin>>a>>b>>c;
  vi nums;
  nums.pb(a);
  nums.pb(b);
  nums.pb(c);
  sort(nums.begin(), nums.end());
  d= nums[2]-nums[0];
  cout<<d;
}