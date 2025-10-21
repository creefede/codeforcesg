#include<iostream>
using namespace std;
int main(){
    int n,a,b,i=0,cont=0,res=0;
    cin>>n;
    while(i<n){
        cin>>a>>b;
        cont -=a;
        cont +=b;
        if(cont>res){
            res = cont;
        }
        i++;
    }cout<<res;
    return 0;
}
