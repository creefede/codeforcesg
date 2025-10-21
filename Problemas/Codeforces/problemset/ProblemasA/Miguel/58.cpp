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
  string str, hello;
  cin>>str;
  hello = "hello";
  int i=0, j=0;
  while(i<str.size()){
    if(str[i]==hello[j]){
        j++;
        i++;
    }else{
        str.erase(i, 1);
    }
  }
  if(str==hello){
    cout<<"YES";
  }else{cout<<"NO";}
  return 0;
}