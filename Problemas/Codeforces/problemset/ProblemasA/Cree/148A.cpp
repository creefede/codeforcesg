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
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int count = 0;
    for(int i=1;i<=d;++i){
      if(i%k==0 || i%l==0 || i%m==0 || i%n==0){
        ++count;
      }
    }
    cout<<count<<el;
    return 0;
}
