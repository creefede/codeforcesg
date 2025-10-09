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
    ll a, b, c, d, cont=0;
    cin >> a >> b >> c >> d;
    unordered_map<int, int> numer;  
    vi nums = { (int)a, (int)b, (int)c, (int)d };
    for (int num : nums) {
        numer[num]++; 
    }
    for (auto &p : numer) {
        if (p.second >= 2) {
            cont += p.se -1;
        }
    }
    cout<<cont;
    return 0;
}
