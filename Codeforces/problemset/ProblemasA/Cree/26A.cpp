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
  vi primes;
  primes.pb(2);
  for(int i=3;i<n+1;++i){
    bool primo = true;
    for(int a : primes){
      if(i%a==0){
        primo = false;
      }
    }
    if(primo){
      primes.pb(i);
    }
  }
  int casi = 0;
  for(int i=1;i<=n;++i){
    int count = 0;
    for(int a : primes){
      if(i%a==0)count++;
    }
    if(count==2)casi++;
  }
  cout<<casi<<el;
  return 0;
}

