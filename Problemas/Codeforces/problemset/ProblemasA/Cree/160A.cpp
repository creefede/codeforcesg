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
  int n;
  cin>>n;
  vi nums;
  int platatotal = 0;
  for(int i=0;i<n;++i){
    int a;
    cin>>a;
    nums.pb(a);
    platatotal += a;
  }
  sort(nums.begin(),nums.end(), greater<int>());
  int count = 0;
  int plata = 0;
  for(int i=0;i<n;++i){
    plata += nums[i];
    count++;
    platatotal -= nums[i];
    if(plata>platatotal){
      cout<<count<<el;
      return 0;
    }
  }
  cout<<count<<el;
  return 0;
}