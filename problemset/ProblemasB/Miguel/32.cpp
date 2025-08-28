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
  string a, b;
  int i=0;
  cin>>a;
  while(i<a.size()){
    if(a[i] == '.'){
        b=b+'0';
    }else if(a[i]=='-'&&i<a.size()-1){
        if(a[i+1]=='.'){
            b=b+'1';
            i++;
        }else{
            b=b+'2';
            i++;
        }
    }
    i++;
  }cout<<b;
  return 0;
}
