#include<iostream>
#include<string>
using namespace std;
int main(){
    string str,str2;
    cin>>str>>str2;
    int i=0;
    while(i<str.size()){
        if(str[i]==str2[i]){
            str[i] = '0';
        }else{
            str[i] = '1';
        }
        i++;
    }cout<<str;
}