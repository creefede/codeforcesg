#include <bits/stdc++.h>

#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;
typedef double ld;
typedef vector<int> vi;

int main(){
  ll n;
  int k;
  cin>>n>>k;
  for(int i=0;i<k;++i){
    if(n%10==0){
      n = n/10;
    }else{
      n --;
    }
  }
  cout<<n;
  return 0;
}