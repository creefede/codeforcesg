#include <bits/stdc++.h>

#define fi first
#define se second
#define forn(i,n) for(int i=0;i< (int)n; ++i)
#define pb push_back
#define el '\n'
#define sz(v) int(v.size())
#define all(v) v.begin(),v.end()

using namespace std;

typedef long long ll;
typedef double ld;
typedef pair<int,int> ii;
typedef pair<ll,ll> pll;
typedef tuple<int,int,int> iii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<ll> vll;
typedef vector<ld> vd;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int n; cin>>n;
  int i=0, max=0,min=101, maxi=0, mini=0;
  //vector<pair<int, int>> nums;
  while(i<n){
    int a; cin>>a;
    if(a>max){max=a;maxi=i;}
    if(a<=min){min=a;mini=i;}
    //nums.pb({a, i});
    i++;
  }
  int distotal=0, dismin=0;
  dismin= n-mini-1;
  distotal=dismin+maxi;
  if (maxi > mini) distotal--;
  cout<<distotal<<endl;
  return 0;
}
