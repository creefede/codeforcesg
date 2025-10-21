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
  int n;cin>>n;while(n--){
    vector<vector<char>> nums(10,vector<char>(10));
    forn(i,10){
        forn(j,10){
            cin >> nums[i][j];
        }
    }int cont=0;
    forn(i,10){
        forn(j,10){
            if(nums[i][j]=='X'){
                int q=i,y=j;
                if(q>=5)q=10-q;else q++;if(y>=5)y=10-y;else y++;
                int x =min(q,y);
                cont += x;
                //bug(i);bug(j);bug(x);
                //bug(x);
                //bug(cont);
            }
        }
    }msg(cont);    
  }
}
