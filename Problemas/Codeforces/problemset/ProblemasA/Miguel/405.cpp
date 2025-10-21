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
  vi nums(t);
  int i=0;
  while(i<t){
    int n; cin>>n;
    nums[i] = n;
    i++;
  }
  int j=t-1;
  while(j>0){
    int k =1;
    while(k<=j){
        if(nums[j]<nums[j-k]){
            swap(nums[j], nums[j-k]);
        }
        k++;
    }
    j--;
  }
  int p=0;
  while(p<t){
    cout<<nums[p]<<' ';
    p++;
  }
  return 0;
}
