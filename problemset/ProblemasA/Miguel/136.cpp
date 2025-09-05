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
  int t, n, i=0, j=0, k=0;
  cin>>t;
  vector<int> num(t);
  vector<int> ans(t);
  while(i<t){
    cin>>n;
    num[i]=n;
    i++;
  }
  while(j<t){
    ans[num[j]-1]= j;
    j++;
  }
    while(k<t){
    cout<<ans[k]+1<<' ';
    k++;
  }
  return 0;
}