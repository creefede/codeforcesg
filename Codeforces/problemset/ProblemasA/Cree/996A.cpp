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
  int count = 0;
  while(n>0){
    if(n>=100){
      n -= 100;
      count++;
    }else if(n>=20){
      n -= 20;
      count++;
    }else if(n>=10){
      n -= 10;
      count++;
    }else if(n>=5){
      n -= 5;
      count++;
    }else{
      n--;
      count++;
    }
  }
  cout<<count<<el;
  return 0;
}

