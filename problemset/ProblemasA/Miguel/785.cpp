#include<iostream>
#include<string>
using namespace std;
int main(){
    int n, i=0,cont =0;
    cin>>n;
    string str;
    while(i<n){
        cin>>str;
        if(str=="Tetrahedron"){
            cont = cont + 4;
        }else if(str =="Cube"){
            cont = cont + 6;
        }else if(str =="Octahedron"){
            cont = cont + 8;
        }else if(str =="Dodecahedron"){
            cont = cont + 12;
        }else if(str =="Icosahedron"){
            cont = cont + 20;
        }i++;
    }cout<<cont;
}