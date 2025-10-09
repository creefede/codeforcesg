
#include <bits/stdc++.h>

#define fi first
#define se second
#define pb push_back
#define el '\n'

using namespace std;

typedef long long ll;
typedef double ld;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<ld> vd;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int t;
  cin>>t;
  for(int i=0;i<t;++i){
    char c;
    cin>>c;
    string s = "codeforces";
    auto it = s.find(c);
    if(it!= string::npos){ //Para strings es string::npos, no != s.end()
      cout<<"YES"<<el;
    }else{
      cout<<"NO"<<el;
    }
  }
  return 0;
}

