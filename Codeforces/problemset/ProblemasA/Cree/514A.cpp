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
      string x;
      cin>>x;
      forn(i,sz(x)){
        if(x=="9"&&sz(x)==1)break;
        char c = x[i];
        int num = c - '0';
        if(num>=5){
          if(num==9&&i==0)continue;
          num = 9-num;
        }
        c = char(num + '0');
        x[i] = c;
      }
      cout<<x<<el;
      return 0;
    }
     