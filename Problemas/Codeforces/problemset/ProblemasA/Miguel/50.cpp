#include <iostream>
using namespace std;
int main()
{
    int n, m, nm;
    cin>>n>>m;
    nm = n*m;
    if(nm<2){
        cout<<0;
    }else if(nm%2 == 0){
        cout<<(nm/2);
    }else{
        cout<<((nm-1)/2);
    }
    return 0;
}
