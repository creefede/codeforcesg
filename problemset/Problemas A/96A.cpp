#include <bits/stdc++.h>

#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;
typedef double ld;
typedef vector<int> vi;

int main(){
  string s;
  cin>>s;
  string s1 = "1111111";
  string s2 = "0000000";
  auto it = s.find(s1);
  auto it2 = s.find(s2);
  if(it!=std::string::npos||it2!=std::string::npos){
    cout<<"YES\n";
  }else{
    cout<<"NO\n";
  }
  return 0;
}