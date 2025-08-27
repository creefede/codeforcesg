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
    int a, b, i=0, v=0;
    cin>>a;
    vector<int> num;
    while(i<a){
        cin>>b;
        num.push_back(b);
        i++;
    }
    sort(num.begin(), num.end());
    i=0;
    while(i<a-1){
        if(num.at(i+1)-num.at(i)>1){v=1;break;}
        i++;
    }
    if(v==0){cout<<"YES"<<endl;}
    else{cout<<"NO"<<endl;}
  }
  return 0;
}