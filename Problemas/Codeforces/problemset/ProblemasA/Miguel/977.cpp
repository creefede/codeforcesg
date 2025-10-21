#include <iostream>
using namespace std;
int main()
{
    int n, k,i=0;
    cin>>n>>k;
    while(i<k){
        if((n%10)==0){
            n = n/10;
        }else{
            n--;
        }i++;
    }cout<<n;
    return 0;
}
