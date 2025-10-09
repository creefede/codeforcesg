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
  int n; cin>>n;
  while(n--){
    string a; cin>>a;
    int i=0, div=0, A;
    vi nums;
    while(i<a.size()){
        int cer;
        if(a[i]!='0'){
            div ++;
            A =a[i] -'0';
            cer =a.size() - i-1;
            A = A * pow(10, cer);
            nums.pb(A);
        }i++;
    }
    cout<<div<<el;
    int j = 0;
    while(j<nums.size()){
        cout<<nums[j]<<' ';
        j++;
    }
    cout<<el;
  }
}
