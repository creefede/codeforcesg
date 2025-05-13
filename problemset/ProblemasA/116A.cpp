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
  int cap = 0;
  for(int i=0;i<n;++i){
    int a,b;
    cin>>a>>b;
    count += b-a;
    cap = max(count,cap);
  }
  cout<<cap<<el;
  return 0;
}
