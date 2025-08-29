#include <bits/stdc++.h>

#define fi first
#define se second
#define forn(i,n) for(int i=0;i< (int)n; ++i)
#define pb push_back
#define el '\n'

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
    ii pto1;
    ii pto2;
    ii pto3;
    ii pto4;
    int area = 0;
    forn(j,4){
      int x,y;
      cin>>x>>y;
      if(j==0)pto1={x,y};
      if(j==1)pto2={x,y};
      if(j==2)pto3={x,y};
      if(j==3)pto4={x,y};
    }
    if(pto1.fi==pto2.fi){
      int base = abs(pto1.se-pto2.se);
      int altura = abs(pto3.se-pto4.se);
      area = base*altura;
    }else if(pto1.fi==pto3.fi){
      int base = abs(pto1.se-pto3.se);
      int altura = abs(pto2.se-pto4.se);
      area = base*altura;
    }else if(pto1.fi==pto4.fi){
      int base = abs(pto1.se-pto4.se);
      int altura = abs(pto2.se-pto3.se);
      area = base*altura;
    }
    cout<<area<<el;
  }
  return 0;
}

