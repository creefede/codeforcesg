#include <bits/stdc++.h>

#define fi first
#define se second
#define forn(i,n) for(int i=0;i< (int)n; ++i)
#define foraut(p,m) for(auto &p : m)
#define pb push_back
#define el '\n'
#define sz(v) int(v.size())
#define all(v) v.begin(),v.end()
#define fa(x) bool x=false
#define msg(x) cout << (x) << el
#define bug(x) cout << (#x) << ": " << (x) << el

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
typedef unordered_map<int,int> umi;
typedef unordered_map<char,int> umc;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int t;
  cin>>t;
  forn(z,t){
    int n;
    cin>>n;
    cin.ignore(); //Esto para que no haya problema con el getline despues
    vi nums;
    forn(i,n){
      string a;
      getline(cin,a);
      forn(j,4){
        if(a[j]=='#'){
          nums.pb(j+1);
        }
      }
    }
    for(int j=n-1;j>=0;j--){
        cout<<nums[j]<<" ";
      }
    cout<<el;
  }
  return 0;
}