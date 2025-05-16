#include<iostream>
#include<string>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    int i = 0,j=0;
    while(j<t){
        i = 0;
        while(i<n){
            if(s[i] == 'B' && s[i + 1] == 'G'){
                swap(s[i],s[i+1]);
                i++;
            }i++;
        }j++;
    }
    cout<<s;
}
