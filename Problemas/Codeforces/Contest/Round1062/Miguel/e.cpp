#include <bits/stdc++.h>

#define fi first
#define se second
#define forn(i,n) for(int i=0;i< (int)n; ++i)
#define fore(i,l,r) for(int i=(int)l; i<= (int)r; ++i)
#define ford(i,n) for(int i=(int)(n) - 1; i>= 0; --i)
#define foraut(p,m) for(auto &p : m)
#define forc(c,s) for(char c: s)
#define pb push_back
#define el '\n'
#define sz(v) int(v.size())
#define all(v) v.begin(),v.end()
#define tc int t; cin >> t; while(t--)
#define fa(x) bool x=false
#define d(x) cout << (x) << el
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
typedef unordered_map<string,int> ums;

const int inf = 1e9;
const int nax = 1e5+200;
const ld pi = acos(-1);

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  tc{
        int n,k,x;cin>>n>>k>>x;
        vi nums(n);
        forn(i,n)cin>>nums[i];
        sort(all(nums));
        int g=0;
        vi dis;
        forn(j,n){
            while(g<nums[j]){
                int di=nums[j]-g;
                dis.pb(di);
                g++;
            }
            g=nums[j];
        }int p=nums[n-1]+1;
        while(p<=x){
            int dim=p-nums[n-1];
            dis.pb(dim);
            p++;
        }
        sort(all(dis),greater<>());
        forn(l,k){
            cout<<dis[k-l-1]<<" ";
        }cout<<endl;
  }
}