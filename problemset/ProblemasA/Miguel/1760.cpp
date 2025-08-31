#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b, c, d, e;
        cin>>a>>b>>c;
        d = max(a,max(b,c));
        e = min(a,min(b,c));
        cout<<(a+b+c-d-e)<<endl;
    }
    return 0;
}