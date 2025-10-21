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
  int t, a0, a1, a2, a3, a4, a5;
  string a;
  cin>>t;
  while(t--){
    a.clear();
    cin>>a;
    a0 = a[0];a1 = a[1];a2 = a[2];a3 = a[3];a4 = a[4];a5 = a[5];
    if(a0+a1+a2==a3+a4+a5){cout<<"yes"<<endl;}
    else{cout<<"no"<<endl;}
  }
  return 0;
}