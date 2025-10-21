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
  int n;
  cin>>n;
  int mini = 100;
  int maxi = 1;
  vi nums;
  int count = 0;
  forn(i,n){
    int a;
    cin>>a;
    mini = min(mini,a);
    maxi = max(maxi,a);
    nums.pb(a);
  }

  auto it1 = find(all(nums), maxi);
  int indimax = it1 - nums.begin();
  while(nums[0]!=maxi){
    swap(nums[indimax],nums[indimax-1]);
    indimax--;
    count++;
  }

  auto it2 = find(nums.rbegin(),nums.rend(),mini);
  int indimin = sz(nums)-1-(it2 - nums.rbegin());
  while(nums[sz(nums)-1]!=mini){
    swap(nums[indimin],nums[indimin+1]);
    indimin++;
    count++;
  }
  cout<<count<<el;
  return 0;
}

