#include<iostream>
#include<string>
using namespace std;
int main(){
    int n, i =0, a= 0, d=0;
    string str;
    cin>>n;
    cin>>str;
    while(i<n){
        if(str[i]=='A'){
            a++;
        }else{d++;}
        i++;
    }if(d>a){cout<<"Danik";}
    else if(d<a){cout<<"Anton";}
    else{cout<<"Friendship";}
    return 0;
}
