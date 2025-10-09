#include<iostream>
#include<vector>

using namespace std;

int main(){
    int size;
    int num;
    bool pair;
    bool pair_prev;
    int changes =0;
    int pos_change = 0;
    cin>> size;

    for(int i = 0; i < size; i++){
        cin>> num;
        if(i == 0){
            pair = num % 2 ==0;
        }
        else{
            pair_prev = pair;
            pair = num % 2 ==0;
            if(pair_prev != pair){
                pos_change = i;
                changes += 1;
            }
        }}
    if(pos_change == 0 && changes == 1){
        cout<<1;
    }
    else if(pos_change == size - 1 && changes == 1){
        cout<<size ;
    }
    else{
        cout<<pos_change;
    }


    return 0;}
