#include <bits/stdc++.h>

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
  int y, w; cin>>y>>w;
  int z = max(y,w);
  if(z==1){cout<<"1/1";}
  else if(z==2){cout<<"5/6";}
  else if(z==3){cout<<"2/3";}
  else if(z==4){cout<<"1/2";}
  else if(z==5){cout<<"1/3";}
  else if(z==6){cout<<"1/6";}
}