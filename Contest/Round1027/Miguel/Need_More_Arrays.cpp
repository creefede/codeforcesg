#include<iostream>
using namespace std;
int main(){
    int n,t,j=0, a, i=0, b=-1, res=0;
    cin>>t;
    while(j<t){
    cin>>n;
    while(i<n){
        cin>>a;
        if(b+1<a){
            res++;
            b=a;
        }
        i++;
    }cout<<res<<endl;
    i=0;
    b=-1;
    res =0;
    j++;
}
}
