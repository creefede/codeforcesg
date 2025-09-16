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
  int i=0, cont =0;
  vi num;
  while(i<n){
    int a; cin>>a;
    num.pb(a);
    i++;
  }
  sort(num.begin(), num.end());
  int j=0, k=num.size()-1, tax=0;
  while(j<k){
    if(num[j]+num[k]>4){
        k--;
        tax=0;
        cont++;
    }else{
        int sum=num[j]+num[k];
        k--;
        j++;
        while(sum<4&&j<=k){
            if(sum + num[k]<=4){
                sum += num[k];
                k--;
            }else if(sum + num[j]<=4){
                sum += num[j];
                j++;
            }else{
                tax=0;
                break;
            }
        }
        cont++;
    }
  }
  if (j == k) cont++;
  cout<<cont;
  return 0;
}
