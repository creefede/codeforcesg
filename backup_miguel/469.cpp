#include<iostream>
#include<vector>
#include<algorithm>
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
 
  int n;
  cin >> n;
  vi niv;
  int p; cin >> p;
  int i = 0;
  while(i < p){
    int x; cin >> x;
    niv.pb(x);
    i++;
  }
  int q; cin >> q;
  i = 0;
  while(i < q){
    int y; cin >> y;
    niv.pb(y);
    i++;
  }
  sort(niv.begin(), niv.end());
  niv.erase(unique(niv.begin(), niv.end()), niv.end());
 
  if((int)niv.size() == n) cout << "I become the guy." << el;
  else cout << "Oh, my keyboard!" << el;
 
  return 0;
}
