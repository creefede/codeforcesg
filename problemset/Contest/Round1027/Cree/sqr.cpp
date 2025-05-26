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
  ll t;
  cin>>t;
  for(int i=0;i<t;++i){
    string s;
    cin>>s;
    int numero = stoi(s);
    bool cosa = false;
    for(int i=0;i<51 && !cosa;++i){
      for(int j=0;j<51;++j){
        int a = i;
        int b = j;
        int num = a+b;
        int pot = num*num;
        if(pot==numero){
          cout<<a<<" "<<b<<el;
          cosa = true;
        }
      }
    }
    if(!cosa){
      cout<<"-1"<<el;
    }
  }
  return 0;
}
