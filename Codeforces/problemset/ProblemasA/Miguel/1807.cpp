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
  int t, a,b,c;
  cin>>t;
  while(t--){
  cin>>a>>b>>c;
  if(a+b==c){cout<<"+"<<endl;}
  else{cout<<"-"<<endl;}
  }
  return 0;
}