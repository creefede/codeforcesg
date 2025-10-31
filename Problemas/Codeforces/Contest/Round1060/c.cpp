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
    int n;cin>>n;
    vi nums(n);
    forn(i,n)cin>>nums[i];
    forn(j,n){int a;cin>>a;}
    fa(x);fa(p);fa(t);
    forn(k,n){
        int q=k+1;
        while(q<n){
            if((gcd(nums[k],nums[q]))!=1){x=true;}
            if(gcd(nums[k]+1,nums[q])!= 1||gcd(nums[k],nums[q]+1)!= 1)p= true;
            if(x==true)break;
            q++;
        }
        if(x==true)break;
    }
    if(x==true)msg(0);
    else{
        if(p==true)msg(1);
        else msg(2);
    }
  }
}
