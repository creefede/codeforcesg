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
  int n,h;
  cin>>n>>h;
  int count = 0;
  for(int i=0;i<n;++i){
    int a;
    cin>>a;
    if(a>h){
      count+=2;
    }else{
      count++;
    }
  }
  cout<<count<<el;
  return 0;
}