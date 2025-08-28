#include<iostream>
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
  int n, d, a, i=0, j=0, k=1,cont =0;
  cin>>n>>d;
  vector<int> alt;
  while(i<n){
    cin>>a;
    alt.push_back(a);
    i++;
  }
  sort(alt.begin(), alt.end());
  while(j<n){
    while(k<n){
        if((alt.at(k)-alt.at(j))<=d){
            k++;
            cont +=2;
        }else{break;}
    }j++;
    k=j+1;
}
    cout<<cont;
  return 0;
}
