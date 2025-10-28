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
  ll x,y;cin>>x>>y;
  ll a,b;cin>>a>>b;

  if(x==0&& y==0)d(0);
  else if(x==0)d(abs(y*a));
  else if(y==0)d(abs(x*a));
  else{
    ll cont=0;
    ll conti=0;
    if(x>0&&y>0){if(y>x){cont+=(x*b);cont+=((y-x)*a);conti+=(x*a);conti+=(y*a);}else {cont+=y*b;cont+=(x-y)*a;conti+=y*a;conti+=x*a;}d(min(cont,conti));}
    else if(x<0&&y<0){if(y<x){cont+=x*b*-1;cont+=(y-x)*a*-1;conti+=x*a*-1;conti+=y*a*-1;}else {cont+=y*b*-1;cont+=(x-y)*a*-1;conti+=y*a*-1;conti+=-1*x*a;}d(min(cont,conti));}
    else{
      if(x>0){cont+=x*a;cont+=y*a*-1;}
      else {cont+=y*a;cont+=x*a*-1;}
      d(cont);
    }
  }
}
}
