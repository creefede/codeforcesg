#include <bits/stdc++.h>

#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;
typedef double ld;
typedef vector<int> vi;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int n;
  cin>>n;
  vi nums;
  for(int i=0;i<n;++i){
    int a;
    cin>>a;
    nums.pb(a);
  }
  int even = 0;
  int odd = 0;
  for(int i=0;i<n;++i){
    if(nums[i]%2==0){
      even++;
    }else{
      odd++;
    }
  }
  for(int i=0;i<n;++i){
    if(even>1){
      if(nums[i]%2!=0){
        int num = i+1;
        cout<<num;
      }
    }else if(odd>1){
      if(nums[i]%2==0){
        int num = i+1;
        cout<<num;
      }
    }
  }
  return 0;
}