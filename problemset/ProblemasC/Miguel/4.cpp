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
  unordered_map<string, int> nom;
  int i=0;
  while(i<n){
    string a; cin>>a;
    nom[a]++;
    if(nom[a] == 1){
        cout<<"OK"<<el;
    }
    else{
        cout<<a<<nom[a]-1<<el;
    }
    i++;
  }
  return 0;
}
