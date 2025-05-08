#include <iostream>
#include <vector>

#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;
typedef double ld;
typedef vector<int> vi;

int main(){
  int n;
  cin>>n;
  int countx = 0;
  int county = 0;
  int countz = 0;
  for(int i=0;i<n;++i){
    int x,y,z;
    cin>>x>>y>>z;
    countx = countx + x;
    county = county + y;
    countz = countz + z;
  }
  if((countx==0&&county==0)&&countz==0){
    cout<<"YES\n";
  }else{
    cout<<"NO\n";
  }
  return 0;
}