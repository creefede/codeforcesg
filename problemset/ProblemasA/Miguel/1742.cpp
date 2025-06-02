#include<iostream>
using namespace std;
int main(){
    int n, a, b, c, i=0;
    cin>>n;
    while(i<n){
        cin>>a>>b>>c;
        if(a+b==c||a+c==b||b+c==a){
            cout<<"YES"<<endl;
        }else{cout<<"NO"<<endl;}
        i++;
    }
}