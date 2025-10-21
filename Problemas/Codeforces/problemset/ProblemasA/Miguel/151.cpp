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
  int n, k, l, c, d, p, nl, np;
  cin>>n>>k>>l>>c>>d>>p>>nl>>np;
  int D = (k*l)/nl;
  int L = (c*d);
  int S = (p/np);
  int mini = min(D,min(L,S))/n;
  cout<<mini<<el;
  return 0;
}