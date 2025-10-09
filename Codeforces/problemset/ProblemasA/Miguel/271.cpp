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
    int y, i=0;
    cin>>y;
    string Y;
    Y = to_string(y);
    y++;
    while(i<Y.size()-1){
        Y = to_string(y);
        if(Y[i] == Y[i+1]||Y[i]== Y[i+2]||Y[i]==Y[i+3]||Y[i+1]==Y[i+2]||Y[i+1]==Y[i+3]||Y[i+2]==Y[i+3]){
            y++;
            i=0;
        }
        else{i++;}
    }cout<<y;
}