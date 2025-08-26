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
  long long n, m, a, i=1, cont=0;
  cin>>n>>m;
  while(m>0){
    cin>>a;
    if(a>i){
        cont = cont + (a-i);//2
    }
    else if(a<i){
      cont = cont + (n-i)+a;
    }
    i=a;
    m--;
  }
  
  /*
  while(m>0){
    cin>>a;  
    hola
    while(a != i){
        i++;
        cont++;
        if(i>n){i=1;}
    }m--;
  }*/

    cout<<cont<<endl;
return 0;
}
