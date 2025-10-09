#include<iostream>
using namespace std;
int main(){
    int n,a,i=0,res=0;
    cin>>n;
    while(i<n){
        cin>>a;
        if(a == 1){
           res = 1; 
        }i++;
    }if(res==1){cout<<"HARD";}
    else{cout<<"EASY";}
}
