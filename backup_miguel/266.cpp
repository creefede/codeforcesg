#include <iostream>
#include <string>
using namespace std;
 
int main(){
    int n, cont = 0, i = 0;
    cin>>n;
    string str;
    cin>>str;
    while(i<n){
        if (str[i] == str[i + 1]){
            cont ++;
        }
        i++;
    }
    cout<<cont;
    return 0;
}
