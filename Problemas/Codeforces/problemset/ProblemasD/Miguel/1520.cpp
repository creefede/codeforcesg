#include <bits/stdc++.h>

#define fi first
#define se second
#define forn(i,n) for(int i=0;i< (int)n; ++i)
#define foraut(p,m) for(auto &p : m)
#define forc(c,s) for(char c: s)
#define pb push_back
#define el '\n'
#define sz(v) int(v.size())
#define all(v) v.begin(),v.end()
#define tc int t; cin >> t; while(t--)
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
  tc{
    int n; cin>>n;
    vi nums(n);
    forn(i,n){
        cin>>nums[i];
    }ll cont=0;
    /*
    forn(j,n-1){
        int k=j+1;
        int x=nums[j]-j+1;
        while(k<n){
            if(x==nums[k]-k+1)cont++;
            k++;
        }
    }
        */
    unordered_map<ll,ll> par;
    forn(j,n){
        ll pos = nums[j]-j+1;
        cont+=par[pos];
        par[pos]++;
    }
    msg(cont);
  }
}
