#include <bits/stdc++.h>

#define fi first
#define se second
#define forn(i,n) for(int i=0;i< (int)n; ++i)
#define pb push_back
#define el '\n'
#define sz(v) int(v.size())
#define all(v) v.begin(),v.end()

using namespace std;

typedef long long ll;
typedef double ld;
typedef pair<int,int> ii;
typedef pair<ll,ll> pll;
typedef tuple<int,int,int> iii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<ll> vll;
typedef vector<ld> vd;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  string n; cin>>n;
  bool res = false;
  for(char c : n){
    if(c!='4'&&c!='7'){res=true; break;}
  }
  if(res==false){cout<<"YES"<<el; return 0;}
  int N = stoi(n);
  if(N%4==0||N%7==0||N%44==0||N%47==0||N%74==0||N%77==0){cout<<"YES"<<el;}
  else{cout<<"NO"<<el;}
  return 0;
}
