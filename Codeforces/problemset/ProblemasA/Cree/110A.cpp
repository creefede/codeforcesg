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
  ll n;
  cin>>n;
  int count = 0;
  string s = to_string(n);
  for(int i=0;i<s.size();++i){
    if(s[i]=='4'||s[i]=='7')count++;
  }
  if(count==7||count==4){
    cout<<"YES"<<el;
  }else{
    cout<<"NO"<<el;
  }
  return 0;
}
