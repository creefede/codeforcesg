#include<iostream>
using namespace std;
int main(){
    int n, a, i=0,res=0,fin=0;
    cin>>n;
    while(i<n){
        cin>>a;
        if(a>0){res +=a;}
        else{
            if(res>0){res--;}
            else{fin++;}
        }
        i++;
    }cout<<fin;
}