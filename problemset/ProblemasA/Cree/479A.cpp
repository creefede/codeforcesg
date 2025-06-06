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
  int a,b,c;
  cin>>a>>b>>c;
  int abc = a+b+c;
  int ab = (a+b)*c;
  int bc = a*(b+c);
  int hola = a+(b*c);
  int hola2 = (a*b)+c;
  int hola3 = a*b*c;
  int max = abc;
  if(max<ab){
    max = ab;
  }
  if(max<bc){
    max = bc;
  }
  if(max<hola){
    max = hola;
  }
  if(max<hola2){
    max = hola2;
  }
  if(max<hola3){
    max = hola3;
  }
  cout<<max<<el;
  return 0;
}


