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
  int t;
  cin>>t;
  forn(i,t){
    string s;
    cin>>s;
    bool entro = false;
    if(sz(s)==1){
      entro = true;
      if(s[0]=='a'){
        s.pb('z');
      }else{
        s.pb('a');
      }
    }
    forn(j,sz(s)){
      if(j==sz(s)-1)break;
      if(s[j]==s[j+1]){
        entro = true;
        if(s[j]=='a'){
          s.insert(j+1,"z");
        }else{
          s.insert(j+1,"a");
        }
        break;
      }
    }
    if(!entro){
      if(s[0]=='a'){
        if(s[1]=='b'){
          s.insert(1,"z");
        }else{
          s.insert(1,"b");
        }
      }else{
        if(s[1]=='a'){
          if(s[0]=='z'){
            s.insert(1,"b");
          }else{
            s.insert(1,"z");
          }
        }else{
          s.insert(1,"a");
        }
      }
    }
    cout<<s<<el;
  }
  return 0;
}

