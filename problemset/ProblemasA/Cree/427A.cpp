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
  ll n;
  cin>>n;
  int police = 0;
  int count = 0;
  for(int i=0;i<n;++i){
    int a;
    cin>>a;
    if(a>0){
      police += a;
    }else if(police>0){
      police--;
    }else{
      count++;
    }
  }
  cout<<count<<el;
  return 0;
}
