//---------------------------------Esta malo solo encuentra los pares correctos, no lo reorganiza
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n, t,p, i=0, j=0,cont=0;
    string str;
    cin>>t;
    while(i<t){
        cin>>n>>p>>str;
        while(j<n/2){
            if(str[j]==str[str.size()-j-1]){cont++;}
            j++;
        }if(cont==p){cout<<"YES"<<endl;}else{cout<<"NO"<<endl;}
        i++;
        j=0;
        cont=0;
    }
}
