#include <iostream>
using namespace std;

int main(){
    int num;
    int amount;
    cin>> num;
    cin>>amount;
    for(int i =0; i<amount; i++){
        if(num%10!= 0){
            num --;
        }
        else{
            num /= 10;
        }
    }
    cout<<num;
    return 0;
}
