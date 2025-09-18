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
  int n, m;
  cin>>n>>m;
  int i =0;
  vi nums;
  while(i<m){
    int a; cin>>a;
    nums.pb(a);
    i++;
  }
  sort(nums.begin(), nums.end());
  int j=0, mas=1000000;
  while(j+n-1<m){
    int c= nums[j+n-1] - nums[j];
    mas = min(c, mas);
    j++;
  }
  cout<<mas<<el;
}