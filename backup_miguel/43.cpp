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
  int n; cin>>n;
  string t;cin>>t;
  string c=t,b="";
  int C=1,B=0;
  int i=0;
  while(i<n-1){
    string a; cin>>a;
    if(a==c){C++;}
    else if(a==b){B++;}
    else{b=a;B++;}
    i++;
  }
  if(C>B){cout<<c;}
  else{cout<<b;}
}
