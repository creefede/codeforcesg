#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin>> n;
    int control =0;
    for(int i =0; i < n; i++){
        string op;
        cin>>op;
        if(op == "X++" or op == "++X"){
            control++;

        }
        else{
            control--;
        }
    }
    cout<< control;

    return 0;
}
