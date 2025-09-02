#include<iostream>
#include<string>
using namespace std;
int main(){
    int str, j = 0,f=0 , c=0, i=f;
    while(i<5){
        j=0;
        while(j<5){
            cin>>str;
            if(str==1){c = j;f=i;}
            j++;
        }
        i++;
    }
    int d = abs(c-2)+abs(f-2);
    cout<<d;
    return 0;
}
