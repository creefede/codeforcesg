#include<iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
    // gracias chat, cuenta los unos
    int ans = __builtin_popcountll(n);
    cout<<ans;
    return 0;
}