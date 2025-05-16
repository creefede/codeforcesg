#include<iostream>
using namespace std;
int main(){
    int n, p, q, i=0,cont=0;
    cin>>n;
    while(i<n){
        cin>>p>>q;
        if (p+1<q){
            cont++;
        }
        i++;
    }cout<<cont;
}