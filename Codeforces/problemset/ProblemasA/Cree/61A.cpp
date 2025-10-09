#include <bits/stdc++.h>

#define fi first
#define se second
#define forn(i,n) for(int i=0;i< (int)n; ++i)
#define pb push_back
#define el '\n'

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
  string a,b;
  cin>>a>>b;
  string nuevo = "";
  forn(i,a.size()){
    nuevo.pb('0');
  }
  forn(i,a.size()){
    if(a[i]==b[i]){
      nuevo[i]='0';
    }else{
      nuevo[i]='1';
    }
  }
  cout<<nuevo<<el;
  return 0;
}

