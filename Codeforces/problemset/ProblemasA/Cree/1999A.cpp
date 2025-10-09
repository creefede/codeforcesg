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
    int a;
    cin>>a;
    string hola = to_string(a);
    int uno,dos;
    uno = hola[0] - '0';
    dos = hola[1] - '0';
    int sum = uno + dos;
    cout<<sum<<endl;
  }
  return 0;
}