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
    ll a; cin>>a;
    if((a & (a-1))==0){cout<<"NO"<<el;}
    else{cout<<"YES"<<el;}
    }
  return 0;
}
/*
Operator	Name	Effect	Example	Result
&	AND	1 only if both 1	6 & 3	2         110 & 011 --- 010
|	OR	1 if either is 1	6 | 3   7         110 | 011 --- 111
^	XOR	1 if different	6 ^ 3	5             110 ^ 011 --- 101
~	NOT	Flips bits	~5	-6
<<	Left shift	Multiply by 2^k	3<<2	12
>>	Right shift	Divide by 2^k	20>>2	5
*/