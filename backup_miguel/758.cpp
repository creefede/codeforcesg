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
  int t, a, i=0, cont =0, j=0;
  vector<int> nums;
  cin>>t;
  while(i<t){
    cin>>a;
    nums.push_back(a);
    i++;
  }
  sort(nums.begin(), nums.end());
  while(j<t){
    cont += (nums.at(t-1) - nums.at(j));
    j++;
  }
  cout<<cont<<endl;
  return 0;
}