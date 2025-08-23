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
    int n;
    cin>>n;
    for(int j=2;j<n;++j){
      if(n%((1LL<<j)-1)==0){
        int num = n/((1LL<<j)-1);
        cout<<num<<el;
        break;
      }
    }
  }
  return 0;
}

