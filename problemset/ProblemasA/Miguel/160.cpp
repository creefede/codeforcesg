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
  int t, n, i=0, cont=0, twn =0, j=0, ans=0;
  cin>>t;
  vi nums(t);
  while(i<t){
    cin>>n;
    nums[i]=n;
    twn += n;
    i++;
  }
  sort(nums.begin(), nums.end(), greater<int>());
  while(cont<=twn){
    cont += nums[j];
    twn -= nums[j];
    ans++;
    j++;
  }
  cout<<ans<<el;
  return 0;
}