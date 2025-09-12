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
  ll n;
  cin>>n;
  string ulti = to_string(n);
  ulti.erase(sz(ulti)-1,1);
  string penu = to_string(n);
  penu.erase(sz(penu)-2,1);
  ll ultim = stoll(ulti);
  ll penul = stoll(penu);
  if(n>ultim&&n>penul){
    cout<<n<<el;
  }else if(ultim>n&&ultim>penul){
    cout<<ultim<<el;
  }else{
    cout<<penul<<el;
  }
  return 0;
}

