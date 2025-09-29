#include <bits/stdc++.h>
 
#define fi first
#define se second
#define forn(i,n) for(int i=0;i< (int)n; ++i)
#define foraut(p,m) for(auto &p : m)
#define whi(i,n) while(int i=0 < n)
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
typedef unordered_map<int,int> umi;
typedef unordered_map<char,int> umc;
 
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  ll n, t; cin>>n>>t;
  int i =0;
  vll nums(n);
  while(i<n){
    cin>>nums[i];
    i++;
  }int sum=0, maxi=1;i=0;
  while(i<n-1){
    sum = nums[i];
    int cont=1;
    int j=i+1;
    while(j<n){
        if(nums[j]+sum<=t){sum+=nums[j];cont++;}
        else break;
        j++;
    }
    maxi=max(maxi,cont);
    i++;
  }if(n==1){if(nums[0]>t){maxi=0;}}
  cout<<maxi;
}
//ODIO Time limit exceeded :(