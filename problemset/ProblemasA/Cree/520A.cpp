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
  string s;
  cin>>s;
  for(char &c : s){
    c = tolower(c);
  }
  unordered_map<char,int> count;
  int counta = 0;
  for(char c : s){
    count[c] = count[c] + 1;
  }
  for(const auto& pair : count){
    if(pair.se>=1){
      counta++;
    }
  }
  if(counta==26){
    cout<<"YES"<<el;
  }else{
    cout<<"NO"<<el;
  }
  return 0;
}