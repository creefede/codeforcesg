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
    string n, m; 
    cin >> n;
    if(n[0]=='9'){m.pb('9');n=n.substr(1);}
    for(char c : n){
        int C = c - '0';
        if(C >= 5) C = 9 - C;
        m.pb(char(C + '0'));
    }
    ll M = stoll(m);
    cout << M;
    return 0;
    }