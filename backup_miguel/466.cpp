#include<iostream>
using namespace std;
int main(){
    float n, m, a, b;
    int cont =0;
    cin>>n>>m>>a>>b;
    if((b/m)>a){cout<<(a*n);}
    else{
        while(n>0){
            if(n>m){
                n-=m;
                cont+=b;
            }else{
                if((b/n)>a){cont+=(a*n);break;}
                else{cont+=b;break;}
            }
        }cout<<cont;
    }return 0;
}