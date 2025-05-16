#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin>>n;
    int problems = 0;

    for(int i = 0; i < n; i++){
        int counter = 0;
        for(int i =0; i< 3; i++){
            int sure;
            cin>>sure;
            if(sure == 1){
                counter +=1;
            }

        }
        if(counter >= 2){
            problems += 1;
        }    }

    cout << problems;

return 0;
}
