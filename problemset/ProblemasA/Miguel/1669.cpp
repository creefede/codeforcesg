#include<iostream>
using namespace std;
int main(){
    int n, k;
    cin>>n;
    while(n--){
        cin>>k;
        if(k>=1900){
            cout<<"Division 1"<<endl;
        }
        else if(k>=1600){
            cout<<"Division 2"<<endl;
        }
        else if(k>=1400){
            cout<<"Division 3"<<endl;
        }else{cout<<"Division 4"<<endl;}
    }
}