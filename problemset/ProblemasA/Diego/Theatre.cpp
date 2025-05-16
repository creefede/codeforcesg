#include<iostream>
using namespace std;

int main(){
    int n;
    int m;
    int a;
    

    cin>> n >> m >> a;
    long long length = (n/a);
    long long width (m/a);
    if (n % a != 0){
        length ++;
    }
    if (m % a != 0){
        width ++;
    }
   
    long long ans = width*length;

    cout<< ans;


return 0;
}