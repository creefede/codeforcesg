#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string st;
        cin>>st;
        int a, b;
        a= st[0]-'0';
        b= st[1]-'0';
        cout<<(a+b)<<endl;
    }
    return 0;
}