#include <bits/stdc++.h>

#define fi first
#define se second
#define forn(i,n) for(int i=0;i< (int)n; ++i)
#define pb push_back
#define el '\n'
#define sz(v) int(v.size())
#define all(v) v.begin(),v.end()
#define d(x) cout << (x) << el

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

int upperBound(vector<int> &arr, int x) {
    int low = 0, high = arr.size();
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] <= x)
            low = mid + 1;
        else
            high = mid;
    }
    return low;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int n; cin>>n;
  vi nums(n);
  forn(i,n)cin>>nums[i];
  sort(all(nums));
  int q;cin>>q;
  forn(j,q){
    int a;cin>>a;
    int b= upperBound(nums,a);
    d(b);
  }
}