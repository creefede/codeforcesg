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
  string s1,s2,s3;
  cin>>s1>>s2>>s3;
  string s4 = s1 + s2;
  sort(s3.begin(),s3.end());
  sort(s4.begin(),s4.end());
  if(s3==s4){
    cout<<"YES"<<el;
  }else{
    cout<<"NO"<<el;
  }
  return 0;
}
