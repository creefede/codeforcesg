#include<iostream>
#include <unordered_map>
#include<vector>
#include<algorithm>
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
  unordered_map<char, int> letr;
  int n; cin>>n;
  if(n<26){cout<<"NO"; return 0;}
  int i=0;
  while(i<n){
    char c; cin>>c;
    c = tolower(c);
    letr[c] ++;
    i++;
  }
  if(letr.size()!=26){cout<<"NO";}
  else{cout<<"YES";}
  return 0;
}