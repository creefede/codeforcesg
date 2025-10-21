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
  int n, m; cin>>n>>m;
  int cont =0, i=0, res=0;
  while(i<n){
    int j=0;
    if(res==0){
    while(j<m){
        cout<<"#";
        j++;
    }
    cout<<el;
    res=1;
}
else{
    int k=0;
    if(cont==0){
        while(k<m-1){
            cout<<'.';
            k++;
        }
        cout<<'#'<<el;
        cont =1;
    }
    else{
        cout<<'#';
        while(k<m-1){
            cout<<'.';
            k++;
        }
        cout<<el;
        cont =0; 
    }
    res=0;
}
    i++;
  }
  return 0;
}
