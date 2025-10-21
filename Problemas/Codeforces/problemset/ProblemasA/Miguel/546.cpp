#include <iostream>
using namespace std;
int main()
{
    int k,w,n,i=1,ct=0;
    cin>>k;
    cin>>w;
    cin>>n;
    while(i<=n){
        ct = ct + (i*k);
        i++;
    }
    if(ct<=w){
        cout<<0;
    }else{
        cout<<(ct-w);
    }
    return 0;
}
