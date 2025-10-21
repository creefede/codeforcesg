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
    int len;
    cin>>len;
    vi nums;
    int index;
    for(int j=0;j<len;j++){
      int a;
      cin>>a;
      nums.pb(a);
    }
    int numero = nums[0];
    int count = 0;
    int intruso;
    for(int j=1;j<len;j++){
      if(nums[j]==numero){count++;}else{
        intruso = j+1;
      }
    }
    if(count==0){
      cout<<"1"<<endl;
    }else{
      cout<<intruso<<endl;
    }
  }
  return 0;
}

