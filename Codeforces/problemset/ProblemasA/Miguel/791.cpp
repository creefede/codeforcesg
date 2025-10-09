#include <iostream>
using namespace std;
int main() {
    int a;
    cin>>a;
    int b;
    cin>>b;
    int c = 0;
    while(a<=b){
        a = a*3;
        b = b*2;
        c ++;
    }
    cout<<c;
    return 0;
}
