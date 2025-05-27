#include<iostream>
using namespace std;
int main(){
    int t, n, i=0,a,b=1,cont=0;
    cin>>t;
    while(t--){
        cin>>n;
        if(n==1 || n==2){cont = 0;}
        else if(n%2==0){
            cont = (n/2)-1;
        }else{n-1;cont =(n/2); }
        cout<<cont<<endl;
        cont=0;
    }
}