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
    int maxi=0,cont=0;
    vi nums;
    forn(i,n){
        int a;cin>>a;
        maxi=max(maxi,a);
        if((i+1)%2==0){
            nums.pb(maxi);
        }else{
            nums.pb(a);
        }
    }
    int k=0;
    while(k<n){
        int dif;
        if(k!=n-1&&nums[k]>=nums[k+1]){dif=nums[k]-nums[k+1];cont+=dif+1;nums[k]+=-dif-1;}
        if(k!=0&&nums[k]>=nums[k-1]){dif=nums[k]-nums[k-1];cont+=nums[k]-nums[k-1]+1;nums[k]+=-dif-1;}
        k+=2;
    }
    msg(cont);
   }
}
