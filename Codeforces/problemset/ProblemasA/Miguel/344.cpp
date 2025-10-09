#include<iostream>
#include<string>
using namespace std;
int main(){
    int n, i=0,cont =0;
    cin>>n;
    string str, str2;
    str2 = "20";
    while(i<n){
        cin>>str;
        if(str != str2){
            cont++;
        }str2 = str;
        i++;
    }cout<<cont;
}