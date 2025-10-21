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
  int k;
  cin>>k;
  vi nums;
  for(int i=0;i<12;++i){
    int a;
    cin>>a;
    nums.pb(a);
  }
  sort(nums.begin(),nums.end(),greater<int>());
  int count = 0;
  int cm = 0;
  for(int i=0;i<nums.size();++i){
    if(cm>=k){
      break;
    }else{
      cm += nums[i];
      count++;
    }
  }
  if(cm<k){
    cout<<"-1"<<el;
  }else{
    cout<<count<<el;
  }
  return 0;
}

