#include <iostream>
using namespace std;
int main()
{
    int s;
    cin>>s;
    if(s>2){
        if (s%2 == 0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else{
        cout<<"NO"<<endl;
    }
}
