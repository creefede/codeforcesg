#include<iostream>
using namespace std;

int main(){
    int distance;
    int ans;
    cin>> distance;

    if(distance % 5 != 0){
        ans = (distance / 5) + 1;
    }
    else{
    ans = (distance / 5);}

    cout<<ans;
    
    return 0;

}
