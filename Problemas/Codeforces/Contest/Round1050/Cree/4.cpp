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
  int t;
  cin>>t;
  forn(i,t){
    ll n;
    cin>>n;
    vll nums;
    forn(j,n){
      ll a;
      cin>>a;
      nums.pb(a);
    }
    ll count = 0;
    bool prendido = false;
    sort(all(nums));
    while(n>0){
      if(!prendido){
        bool borrado = false;
        for(int j = n-1;j>=0;--j){
          if(nums[j]%2!=0){
            prendido = true;
            count += nums[j];
            nums.erase(nums.begin()+j);
            borrado = true;
            n--;
            break;
          }
        }
        if(!borrado)break;
      }
      if(prendido){
        for(int j=0;j<n;){
          if(nums[j]%2==0){
            count += nums[j];
            nums.erase(nums.begin()+j);
            n--;
          }else{
            j++;
          }
        }
        bool borrado = false;
        for(int j=0;j<n;){
          if(nums[j]%2!=0){
            prendido = false;
            nums.erase(nums.begin()+j);
            borrado = true;
            n--;
            break;
          }else{
            j++;
          }

        }
        if(!borrado)break;
      }
    }
    cout<<count<<el;
  }
  return 0;
}

