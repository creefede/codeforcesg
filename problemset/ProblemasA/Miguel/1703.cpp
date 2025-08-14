#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    string str;
    cin>>n;
    while(n--){
        cin>>str;
        for (char &c : str) { 
            c = tolower(static_cast<unsigned char>(c));
        }
        if(str != "yes"){
            cout<<"NO"<<endl;
        }else{cout<<"YES"<<endl;}
    }
}