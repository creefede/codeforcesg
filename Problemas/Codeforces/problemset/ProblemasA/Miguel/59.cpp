#include <iostream>
#include<string>
using namespace std;
int main()
{
    string p;
    cin>>p;
    int i =0, j=0, U=0;
    for(i; i< p.size(); i++){
        if(isupper(p[i])){
            U++;
        }else{
            U--;
        }
    }
    if(U>0){
        for(j; j< p.size(); j++){
            p[j]=toupper(p[j]);
        }
    }else{
        for(j; j< p.size(); j++){
            p[j]=tolower(p[j]);
        }
    }
    cout<<p;
}
