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
  ll a, b, cont =0;
  cin>>a>>b;
    if(b<=((a+1)/2)){
        cont=(b*2)-1;
    }else{
        if(a%2!=0){a+=1;}
        cont=(b-a/2)*2;
    }
    cout<<cont;
}
