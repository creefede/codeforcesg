#include <iostream>
using namespace std;
int main(){
    int n, h, a,i=0,cont=0;
    cin>>n>>h;
    while(i<n){
        cin>>a;
        if(a>h){
            cont += 2;
        }else{cont++;}
        i++;
    }cout<<cont;
}
