#include <bits/stdc++.h>

#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;
typedef double ld;
typedef vector<int> vi;

int main(){
  int y;
  cin>>y;
  for(int i=1001;i<9013;++i){
    string s = to_string(i);
    if(s[0]!=s[1]&&s[0]!=s[1]&&s[0]!=s[2]&&s[0]!=s[3]&&s[1]!=s[2]&&s[1]!=s[3]&&s[2]!=s[3]){
      if(i>y){
        cout<<i;
        break;
      }
    }
  }
  return 0;
}