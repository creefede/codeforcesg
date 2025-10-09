#include<iostream>
using namespace std;
int main(){
    int n, cont =0;
    cin>>n;
    while(0<n){
        if(n>=100){
            n = n -100;
            cont ++;
        }else if(n >=20){
            n = n -20;
            cont++;
        }else if(n >=10){
            n = n -10;
            cont++;
        }else if(n >=5){
            n = n -5;
            cont++;
        }else if(n >=1){
            n = n -1;
            cont++;
        }
    }cout<<cont;
}