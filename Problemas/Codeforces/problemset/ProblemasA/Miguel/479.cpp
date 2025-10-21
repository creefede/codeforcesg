#include<iostream>
#include<string>
using namespace std;
int main(){
    int a,b,c, cont =0;
    cin>>a>>b>>c;
    cont = a + b +c;
    if(cont<a*b+c){cont=a*b+c;}
    if(cont <a+b*c){cont=a+b*c;}
    if(cont <a*b*c){cont=a*b*c;}
    if(cont <(a+b)*c){cont=(a+b)*c;}
    if(cont <a*(b+c)){cont=a*(b+c);}
    cout<<cont;
}