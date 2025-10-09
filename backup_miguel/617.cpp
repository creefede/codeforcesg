#include <iostream>
using namespace std;
int main()
{
    int x, i=0,cont=0;
    cin>>x;
    while(i<x){
        if(x>=5){
            x = x-5;
            cont ++;
        }else if(x==4){
            x = x-4;
            cont ++;
        }else if(x==3){
            x = x-3;
            cont ++;
        }else if(x==2){
            x = x-2;
            cont ++;
        }else if(x==1){
            x = x-1;
            cont ++;
        }
    }
    cout<<cont;
    return 0;
}
