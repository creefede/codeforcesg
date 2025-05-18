#include<iostream>
using namespace std;
int main(){
    int n,N,i=0;
    cin>>n;
    N=n;
    while(i<N){
        if(n==1){
            if(N%2==0){
                cout<<"I love it ";
            }else{
                cout<<"I hate it ";
            }
            }else{
            if(i%2==0){
                cout<<"I hate that ";
            } else{
                cout<<"I love that ";
            }}
            n--;
            i++;
    }
}