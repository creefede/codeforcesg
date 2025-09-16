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
  string str, rts; cin>>str;
  int i=0;
  while(i<str.size()){
    if(str[i]=='W'&&str[i+1]=='U'&&str[i+2]=='B'){
        i+=3;
    }
    else{
        while(i<str.size()){
            if(str[i]=='W'&&str[i+1]=='U'&&str[i+2]=='B'){
                i+=3;
                break;
            }
            else{
            rts += str[i];
            i++;
            }
        }
        rts += ' ';
    }

  }
  cout<<rts;
  return 0;
}
