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
  int k, n, a, d,i=0,j=0, cont=0;
  cin>>k>>n;
  vector<int> num(k);
  while(i<k){
    cin>>num[i];
    i++;
  }
  d = num[n-1];
  while(j<k){
    if(num[j]>=d&&num[j]>0){
        cont++;
    }j++;
  }
  cout<<cont;
  return 0;
}