#include<iostream>
using namespace std;
int main(){
    int n, m, ans, des =0;
    cin>>n>>m;
    if(n>m){
        ans = m;
        n = n - m;
        if(n%2==0){
            des = n/2;
        }else{
            n --;
            des = n/2;
        }
    }
        else if(n<m){
        ans = n;
        m = m - n;
        if(m%2==0){
            des = m/2;
        }else{
            m --;
            des = m/2;
        }
    }
    else{ans=n;}
    cout<<ans<<" "<<des;
}