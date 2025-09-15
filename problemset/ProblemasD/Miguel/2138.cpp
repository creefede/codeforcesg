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
  int t; cin>>t;
  while(t--){
    ll n; cin>>n;
    int i=0;
    vll np;
    vll ni;
    while(i<n){
        ll a; cin>>a;
        if(a%2==0){
            np.pb(a);
        }else{ni.pb(a);}
        i++;
    }
    sort(ni.begin(), ni.end());
    ll onf =1, cont=0, z=0;
    if(ni.size()>0){
        cont += ni.back();
        while(z<np.size()){
            cont += np[z];
            z++;
        }
        ni.pop_back();
  }
  int h=0, g=ni.size()-1;
  while(h<=g){
    if(onf==1){
        onf=0;
        h++;
    }
    else{
        cont += ni[g];
        g--;
        onf =1;
    }
  }
  cout<<cont<<endl;
}
}