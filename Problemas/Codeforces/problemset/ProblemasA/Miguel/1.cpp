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
  ld n, m, a, b, c;
  ll cont = 0;
  cin>>n>>m>>a;
  b=ceil(n/a);
  c=ceil(m/a);
  cont += b*c;
  cout<<cont;
  return 0;
}