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
  if(n%2==0){
   ll num = n/2;
   cout<<num<<el;
  }else{
    ll num = -(n+1)/2;
    cout<<num<<el;
  }
  return 0;
}
