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
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    if(n%3==0){cout<<"Second"<<endl;}
    else{cout<<"First"<<endl;}
  }
  return 0;
}