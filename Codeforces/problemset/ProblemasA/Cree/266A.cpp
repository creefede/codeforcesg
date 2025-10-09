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
  string s;
  cin>>s;
  int i = 0;
  int count = 0;
  while(i<n){
    if(s[i] == s[i+1]){
      count++;
    }
    i++;
  }
  cout<<count<<el;
  return 0;
}
