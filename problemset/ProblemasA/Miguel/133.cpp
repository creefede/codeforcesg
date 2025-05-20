#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cin>>str;
    int i=0, cont =0;
    while(i<str.size()){
        if(str[i]=='H'||str[i]=='Q'||str[i]=='9'){
            cont = 1;
        }
        i++;
    }if(cont==1){cout<<"YES";}
    else{cout<<"NO";}
}