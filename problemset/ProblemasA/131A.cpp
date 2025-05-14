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
  string s;
  cin>>s;
  int n = s.size();
  int countup = 0;
  for(int i=1;i<n;++i){
    if(isupper(s[i])){
      countup++;
    }
  }
  if(countup+1==n){
    if(isupper(s[0])){
      s[0] = tolower(s[0]);
    }else{
      s[0] = toupper(s[0]);
    }
    for(int i=1;i<n;++i){
      s[i] = tolower(s[i]);
    }
  }
  cout<<s<<el;
  return 0; 
}
