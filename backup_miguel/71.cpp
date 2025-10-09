#include<iostream>
#include <string>
using namespace std;
 
int main(){
    int n, b = 0;
    string str;
    cin>>n;
    while(b<n){
        cin>>str;
        if(str.size()>10){
            cout<<str[0]<<str.size()-2<<str[str.size()-1]<<endl;
        }else{
            cout<<str<<endl;
        }
        b++;
    }
    return 0;
}
