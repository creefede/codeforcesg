#include <bits/stdc++.h>

#define fi first
#define se second
#define pb push_back
#define el '\n'

using namespace std;

typedef long long ll;
typedef double ld;
typedef vector<int> vi;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  cout <<setprecision(20)<< fixed;
  int n;
  cin>>n;
  double count = 0;
  for(int i=0;i<n;++i){
    double p;
    cin>>p;
    p = p/100;
    count += p;
  }
  double ans = 100*count/n;
  cout<<ans<<el;
  return 0;
}
