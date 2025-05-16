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
  getline(cin,s);
  unordered_map<char,int> count;
  for(char &c : s){
    if(c!=' '&&c!=','&&c!='{'&&c!='}') count[c] = count[c] + 1;
  }
  int counta = 0;
  for(const auto& pair : count){
    counta++;
  }
  cout<<counta<<el;
  return 0;
}