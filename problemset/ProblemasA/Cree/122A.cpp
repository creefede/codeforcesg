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
  int n;
  cin>>n;
  string s = to_string(n);
  for(int i=0;i<500;++i){
    string s1 = to_string(i);
    int count = 0;
    for(int j=0;j<s1.size();++j){
      if(s1[j]=='4'||s1[j]=='7'){
        count++;
      }
    }
    if(count==s1.size()){
      if(n%i==0){
        cout<<"YES"<<el;
        return 0;
      }
    }
  }
  cout<<"NO"<<el;
  return 0;
}