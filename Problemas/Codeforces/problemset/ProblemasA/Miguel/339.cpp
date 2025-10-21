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
  string str;
  cin>>str;
  vector<int> num;
  int j=0, i=0;
  while(j<str.size()){
    if(str[j]!='+'){num.push_back(str[j]-'0');}
    j++;
  }
  sort(num.begin(),num.end());
  while(i<num.size()){
    if(i>0){cout<<'+';}
    cout<<num.at(i);
    i++;
  }
  return 0;
}
