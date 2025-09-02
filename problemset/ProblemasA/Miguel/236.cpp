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
  string str;
  cin>>str;
  sort(str.begin(), str.end());
  int i=0, cont=1;
  while(i<str.size()-1){
    if(str[i]!=str[i+1]){cont++;}
    i++;
  }
  if(cont%2!=0){cout<<"IGNORE HIM!";}
  else{cout<<"CHAT WITH HER!";} return 0;
}