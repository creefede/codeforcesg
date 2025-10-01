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
  int t; cin>>t;
  while(t--){
    int n; cin>>n;
    int p=0, ip=0;
    vi nums;
    forn(i,n){
        int a; cin>>a;
        if(a%2==0)p++;
        else ip++;
        nums.pb(a);
    }int cont =0;
    if(n%2==0){
        if(p!=ip)msg(-1);
        else{
            int j=0;
            while(j<n){
                if(nums[j]%2!=0)cont++;
                j+=2;
            }msg(cont);
        }
    }else{
        if(p!=ip+1)msg(-1);
        else{
            int j=0;
            while(j<n){
                if(nums[j]%2!=0)cont++;
                j+=2;
            }msg(cont);
        }
    }
  }
}