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
  int t,  cont=0;
  cin>>t;
  while(t--){
    int a, b, c, d;
    cin>>a>>b>>c;
    d= a+ b+ c;
    if(d>=2){cont++;}
  }cout<<cont;
}