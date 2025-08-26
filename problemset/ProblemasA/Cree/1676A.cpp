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
    string s;
    cin>>s;
    int count1 = 0;
    int count2 = 0;
    for(int j=0;j<3;++j){
      int num = s[j] - '0';
      count1+=num;
    }
    for(int j=3;j<6;++j){
      int num = s[j] - '0';
      count2+=num;
    }
    if(count1==count2){
      cout<<"YES"<<el;
    }else{
      cout<<"NO"<<el;
    }
  }
  return 0;
}

