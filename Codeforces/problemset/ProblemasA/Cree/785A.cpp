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
  int n;
  cin>>n;
  int count = 0;
  for(int i=0;i<n;++i){
    string s;
    cin>>s;
    if(s[0]=='T') count += 4;
    if(s[0]=='C') count += 6;
    if(s[0]=='O') count += 8;
    if(s[0]=='D') count += 12;
    if(s[0]=='I') count += 20;
  }
  cout<<count<<el;
  return 0;
}
