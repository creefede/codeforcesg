#include <iostream>
#include<string>
using namespace std;
int main()
{
    int n,i=0,x=0,y=0,z=0;
    cin>>n;
    while(i<n){
        int xi, yi,zi;
        cin>>xi>>yi>>zi;
        x=x+xi;
        y=y+yi;
        z=z+zi;
        i++;
    }if(x==0 && y==0 && z==0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}
